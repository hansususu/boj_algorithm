#include <iostream>
#include <vector>
using namespace std;

int n, m, x, y, k;
int arr[101];

void change(int begins, int mids, int ends) {
    vector<int> tmp;
    int order = 0;
    for (int i = mids; i <= ends; i++) tmp.push_back(arr[i]);
    for (int i = begins; i < mids; i++) tmp.push_back(arr[i]);
    for (int i = begins; i <= ends; i++) arr[i] = tmp[order++];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) arr[i] = i;
    while (m--) {
        cin >> x >> y >> k;
        change(x, k, y);
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << ' ';
    }
}