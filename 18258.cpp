#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    queue<int> q;
    cin >> n;
    while (n--) {
        string s;
        int x;
        cin >> s;
        if (s == "push") {
            cin >> x;
            q.push(x);
        }
        else if (s == "pop") {
            if (q.size() == 0) cout << "-1\n";
            else {
                x = q.front();
                q.pop();
                cout << x << '\n';
            }
        }
        else if (s == "size") {
            cout << q.size() << '\n';
        }
        else if (s == "empty") {
            cout << q.empty() << '\n';
        }
        else if (s == "front") {
            if (q.size() == 0) cout << "-1\n";
            else cout << q.front() << '\n';
        }
        else if (s == "back") {
            if (q.size() == 0) cout << "-1\n";
            else cout << q.back() << '\n';
        }
    }
}