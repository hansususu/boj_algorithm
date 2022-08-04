#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
string map[26];

int cnt = 0;
vector<int> people;

int dy[] = {1, -1, 0, 0};
int dx[] = {0, 0, 1, -1};

void dfs(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
        if (map[nx][ny] == '1') {
            cnt++;
            map[nx][ny] = '2';
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> map[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (map[i][j] == '1') {
                cnt = 1;
                map[i][j] = '2';
                dfs(i, j);
                people.push_back(cnt);
            }
        }
    }
    cout << people.size() <<endl;
    sort(people.begin(), people.end());
    for (int i = 0; i < people.size(); i++) cout << people[i] << endl;
}