#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    map<string, int> ma;
    vector<string> v;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n+m; i++) {
        string str;
        cin >> str;
        ma[str]++;
        if (ma[str] > 1) v.push_back(str);
    }
    sort(v.begin(), v.end());
    cout << v.size() << '\n';
    for (auto o : v) {
        cout << o << '\n';
    }
}