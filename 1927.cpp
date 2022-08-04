#include <cstdio>
#include <queue>
#include <iostream>
#include <functional>
using namespace std;

priority_queue<int, vector<int>, greater<int> > pq;
int n;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int input;
        scanf("%d", &input);

        switch (input) {
        case 0:
            if (pq.size()) {
                cout << pq.top() << '\n';
                pq.pop();
            }
            else {
                cout << "0\n";
            }
            break;
        default:
            pq.push(input);
            break;
        }
    }
}