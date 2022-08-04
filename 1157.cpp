#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int arr[26] = { 0 };
    int max = 0, index = 0, cnt = 0;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        int n = str.at(i);
        if (n < 97) arr[n-65]++;
        else arr[n-97]++;
    }
    for (int i = 0; i < 26; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }

    for (int i = 0; i <26; i++) {
        if (arr[i] == max) {
            cnt++;
            if (cnt >= 2) {
                cout << "?";
                return 0;
            }
        }
    }
    cout << (char)(index+65);
}