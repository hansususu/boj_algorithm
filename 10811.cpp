#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < n; i++) v.push_back(i+1);
    for (int i = 0; i < m; i++) {
        int start, end;
        cin >> start >> end;
        reverse(&v[start-1], &v[end]);
    }
    for (int i = 0; i < n; i++) cout << v[i] << ' ';
}