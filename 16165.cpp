#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    int n, m, num;
    string grp, str;
    map<string, string> p;

    cin >> n >> m;
    while (n--) {
        cin >> grp >> num;
        while (num--) {
            cin >> str;
            p[grp] = str;
            p[str] = grp;
        }
    }
    while (m--) {
        cin >> str >> num;
        if (!num) for (auto it : p) {
            if (it.second == str) cout << it.first << '\n';
        }
        else {
            cout << p[str] << '\n';
        }
    }
}