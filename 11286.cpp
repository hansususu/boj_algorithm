#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

struct comp {
    bool operator()(int a, int b) {
        if (abs(a) == abs(b)) return a>b;
        else return abs(a) > abs(b);
    }
};

void sol(int n){
    priority_queue< int, vector<int>, comp> pq;

    while (n--) {
        int command;
        cin >> command;
        if (command == 0) {
            if (pq.empty()) cout << '0' << '\n';
            else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else pq.push(command);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    sol(n);

    return 0;
}