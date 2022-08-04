#include <iostream>
#include <algorithm>
using namespace std;

int maxCount = 0;

void countColumn(char arr[51][51], int size) {
    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = 0; j < size; j++) {
            if (arr[i][j] == arr[i][j+1]) count++;
            else {
                if (count > maxCount) maxCount = count;
                count = 1;
            }
        }
    }
}

void countRow(char arr[51][51], int size) {
    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = 0; j < size; j++) {
            if(arr[j][i] == arr[j+1][i]) count++;
            else {
                if (count > maxCount) maxCount = count;
                count = 1;
            }
        }
    }
}

int main() {
    int boardSize = 0;
    char board[51][51];

    cin >> boardSize;

    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize-1; j++) {
            swap(board[i][j], board[i][j+1]);
            countRow(board, boardSize);
            countColumn(board, boardSize);

            swap(board[i][j+1], board[i][j]);
            swap(board[j][i], board[j+1][i]);
            countRow(board, boardSize);
            countColumn(board, boardSize);

            swap(board[j][i], board[j+1][i]);
        }
    }
    cout << maxCount;
}