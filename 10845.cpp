#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, x;
    string str;
    queue<int> q;
    cin >> n;
    while (n--) {
        cin >> str;
        if (str == "push") {
            cin >> x;
            q.push(x);
        }
        else if (str == "pop") {
            if (q.size() > 0) {
               cout << q.front() << '\n';
                q.pop(); 
            }
            else cout << "-1\n";
        }
        else if (str == "size") {
            cout << q.size() << "\n";
        }
        else if (str == "empty") {
            if (q.size() > 0) cout << "0\n";
            else cout << "1\n";
        }
        else if (str == "front") {
            if (q.size() > 0) {
                cout << q.front() << "\n";
            }
            else cout << "-1\n";
        }
        else if (str == "back") {
            if (q.size() > 0) cout << q.back() << "\n";
            else cout << "-1\n";
        }

    } 
}