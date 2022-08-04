#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    queue<int> cir;
    for (int i = 0; i < n; i++) {
        cir.push(i+1);
    }
    cout << "<";
    while (cir.size()-1) {
        for (int i = 0; i < k-1; i++) {
            cir.push(cir.front());
            cir.pop();
        }
        cout << cir.front() << ", ";
        cir.pop();
    }
    cout << cir.front() << ">";
    return 0;
}