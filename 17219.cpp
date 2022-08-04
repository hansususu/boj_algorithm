#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    map<string, string> sol;
    int n, m;
    cin >> n >> m;
    string link, pass;
    while (n--) {
        cin >> link >> pass;
        sol.insert(make_pair(link, pass));
    }
    while (m--) {
        cin >> link;
        cout << sol[link] << '\n';
    }
}