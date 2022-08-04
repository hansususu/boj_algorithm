#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, ans = 0, endpos = 0;
vector<pair<int, int>> v[100001];
bool visited[100001];

void dfs(int a, int b) {
    visited[a] = true;

    if (ans < b) {
        ans = b;
        endpos = a;
    }

    for (int i = 0; i < v[a].size(); i++) {
        int next_node = v[a][i].first;
        int next_dist = v[a][i].second + b;
        if (!visited[next_node]) {
            visited[next_node] = true;
            dfs(next_node, next_dist);
            visited[next_node] = false;
        }
    }
}

int main() {
    cin >> n;
    
    int parent, child, length;
    for (int i = 1; i < n; i++) {
        cin >> parent >> child >> length;
        v[parent].push_back({child, length});
        v[child].push_back({parent, length});
    }
    dfs(1, 0);

    ans = 0;
    for (int i = 1; i <= n; i++) visited[i] = false;
    dfs(endpos, 0);
    cout << ans;
}