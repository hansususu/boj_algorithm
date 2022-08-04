#include <iostream>
#include <stack>
using namespace std;

int main() {
    int k, sum = 0, num;
    stack<int> s;
    cin >> k;

    for (int i = 0; i < k; ++i) {
        cin >> num;
        if (num == 0) {
            s.pop();
        }
        else {
            s.push(num);
        }
    }
    for (int i = 0; !s.empty(); ++i) {
        sum += s.top();
        s.pop();
    }
    cout << sum << endl;

    return 0;
}