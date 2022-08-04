#include <iostream>
#include <algorithm>
using namespace std;

int cmp(const int &a, const int &b) {
    return a > b;
}

int main() {    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int k;

    cin >> k;

    for (int i = 1; i <= k; i++) {
        int n, arr[50], lg = 0;
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        sort(arr, arr+n, cmp);
        for (int j = 0; j < n-1; j++) {
            if (lg < (arr[j] - arr[j+1])) lg = arr[j] - arr[j+1];
        }
        cout << "Class " << i << "\nMax " << arr[0] << ", Min " << arr[n-1] << ", Largest gap " << lg << '\n';
    }

}