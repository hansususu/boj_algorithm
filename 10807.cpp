#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, num, v;
    int arr[201] = { 0 };
    cin >> n;
    for (int i = 0; i< n; i++) {
        cin >> num;
        arr[num+100]++;
    }
    cin >> v;
    cout << arr[v+100];
}