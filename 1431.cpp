#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int sum(string s) {
    int res = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((s[i] - '0') >= 1 && (s[i] - '0') <= 9) res += (s[i] - '0');
    }
    return res;
}

bool cmp(string a, string b) {
    if (a.length() != b.length()) return a.length() < b.length();
    else {
        int asum = sum(a);
        int bsum = sum(b);

        if (asum != bsum) return asum < bsum;
        else return a < b;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < n; i++) cout << v[i] << '\n';
    return 0;
}