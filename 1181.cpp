#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(string &a, string & b){
    if (a.size() != b.size()) return a.size() < b.size();
    else return a < b;
}

int main() {
    int n;
    string str;
    vector<string> v;

    cin >> n;
    while (n--) {
        cin >> str;
        v.push_back(str);
    }
    sort(v.begin(), v.end(), cmp);
    v.erase(unique(v.begin(), v.end()), v.end());
    for(auto i : v) cout << i <<'\n';
    return 0;
}