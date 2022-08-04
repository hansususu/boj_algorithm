#include <iostream>

using namespace std;

int arr[501][501];

int main() {
    int H, W;
    cin >> H >> W;
    
    int n;
    for(int j=0; j<W; ++j) {
        cin >> n;
        for(int i=0; i<n; ++i) {
            arr[i][j] = 1;
        }
    }
    
    for(int i=H-1; i>=0; --i) {
        int l = 0, r = W-1;
        
        if(arr[i][l] == 1 && arr[i][r] == 1) break;

        while(arr[i][l] == 0) {
            arr[i][l] = -1;
            l++;
        }
        
        while(arr[i][r] == 0) {
            arr[i][r] = -1;
            r--;
        }
    }
    
    int answer = 0;
    for(int i=0; i<H; ++i) {
        for(int j=0; j<W; ++j) {
            if(arr[i][j] == 0) answer++;
        }
    }
    
    cout << answer;
    
    return 0;
}