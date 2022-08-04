#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int arr[9];
vector<int> v;
bool visited[9];

void solve(int num, int cnt) {
    if (cnt == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
    }
    else {
        int last = 0;
        for (int i = num; i< v.size(); i++) {
            if (!visited[i] && v[i] != last) {
                arr[cnt] = v[i];
                last = arr[cnt];
                visited[i] = 1;
                solve(i+1, cnt+1);
                visited[i] = 0;
            }
        }
    }
}

int main() {
    cin >> n >> m;
    v.resize(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    solve(0,0);
}