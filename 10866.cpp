#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(int argc, char**argv){
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> DQ;
    int n;

    cin >> n;

    while(n--) {
        string str;
        cin >> str;
        if (str == "push_front") {
            int x;
            cin >> x;
            DQ.push_front(x);
        }
        else if (str == "push_back") {
            int x;
            cin >> x;
            DQ.push_back(x);
        }
        else if (str == "pop_front") {
            if (!DQ.empty()) {
                cout << DQ.front() << "\n";
                DQ.pop_front();
            }
            else cout << "-1\n";
        }
        else if (str == "pop_back") {
            if (!DQ.empty()) {
                cout << DQ.back() << "\n";
                DQ.pop_back();
            }
            else cout << "-1\n";
        }
        else if (str == "size") {
            cout << DQ.size() << "\n";
        }
        else if (str == "empty") {
            cout << DQ.empty() << "\n";
        }
        else if (str == "front") {
            if (!DQ.empty()) {
                cout << DQ.front() << "\n";
            }
            else cout << "-1\n";
        }
        else if (str == "back") {
            if (!DQ.empty()) {
                cout << DQ.back() << "\n";
            }
            else cout << "-1\n";
        }
    }
}