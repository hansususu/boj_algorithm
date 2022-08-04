#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp == 0) cnt--;
        else if (tmp == 1) cnt++;
    }
    if (cnt > 0) cout << "Junhee is cute!";
    else cout << "Junhee is not cute!";
}