#include <iostream>
#include <vector>
#include <queue>
using namespace std; 

int n, m;
int graph[100010];
vector<int> node[100010];

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[b]++;
        node[a].push_back(b);
    }

    queue<int> q;
    for (int i = 1; i <= n; i++) {
        if (graph[i] == 0) q.push(i);
    }
    while (q.empty() == 0) {
        int tmp = q.front();
        q.pop();
        cout << tmp << ' ';
        for (int i = 0; i < node[tmp].size(); i++) {
            int next = node[tmp][i];
            graph[next]--;

            if (graph[next] == 0) q.push(next);
        }
    }
    cout << endl;
    return 0;
}