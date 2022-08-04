#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C;
    bool visited[201][201][201];
    vector<int> v;

    cin >> A >> B >> C;
    queue<pair<pair<int, int>,int>> q;

    q.push(make_pair(make_pair(0,0), C));

    vector<int> res;

    while (!q.empty()) {
        int a = q.front().first.first;
        int b = q.front().first.second;
        int c = q.front().second;
        q.pop();

        if (visited[a][b][c]) continue;

        visited[a][b][c] = true;

        if (a == 0) res.push_back(c);

        if (a + b > B) q.push(make_pair(make_pair(a+b-B,B), c));
        else q.push(make_pair(make_pair(0, a+b), c));

        if (a+c > C) q.push(make_pair(make_pair(a+b-C, b), C));
        else q.push(make_pair(make_pair(0, b), a+c));

        if (b+a > A) q.push(make_pair(make_pair(A, b+a-A), c));
        else q.push(make_pair(make_pair(b+a, 0), c));

        if (b+c > C) q.push(make_pair(make_pair(a, b+c-C), C));
        else q.push(make_pair(make_pair(a, 0), b+c));

        if (c+ a > A) q.push(make_pair(make_pair(A, b), c+a-A));
        else q.push(make_pair(make_pair(c+a,b), 0));

        if (c+b > B) q.push(make_pair(make_pair(a, B), c+b - B));
        else q.push(make_pair(make_pair(a, c+b), 0));
    }

    sort(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << ' ';
    }

}