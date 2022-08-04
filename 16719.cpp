#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

const int MAX = 100;
bool visited[MAX];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;

    for (int i = 0; i< s.length(); i++) {
        vector<pair<string, int>> v;
        for (int j = 0; j < s.length(); j++) {
            if (!visited[j]) {
                string tmp;
                for (int k = 0; k < s.length(); k++) {
                    if (j == k || visited[k]) tmp += s[k];
                }
                v.push_back({tmp, j});
            }
        }
        sort(v.begin(), v.end());
        cout << v[0].first << "\n";
        visited[v[0].second] = true;
    }
}