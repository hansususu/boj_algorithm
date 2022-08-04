#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 8;
int n, m;
int arr[MAX];
vector<int> v;
bool visited[MAX];

void func(int idx) {
    if (idx == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = 0; i < v.size(); i++) {
        if (visited[i] || v[i] < arr[idx-1]) continue;
        visited[i] = true;
        arr[idx] = v[i];
        func(idx+1);
        visited[i] = false;
    }
}

int main() {
    cin >> n >> m;
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    func(0);
}