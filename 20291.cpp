#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int n, cnt = 0;
vector<pair<string, int>> ans;
vector<string> ex;
string s, tmp;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        s.erase(0, s.find('.')+1);
        ex.push_back(s);
    }
    sort(ex.begin(), ex.end());

    tmp = ex[0];
    for (int i = 0; i < ex.size(); i++) {
        if (tmp == ex[i]) cnt++;
        else if (tmp != ex[i]) {
            ans.push_back(pair<string,int>(tmp, cnt));
            tmp = ex[i];
            cnt = 1;
        }
    }
    ans.push_back(pair<string,int>(tmp, cnt));
    for (int i = 0;i < ans.size(); i++) {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
}