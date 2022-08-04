#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int cnt = 0, sum = 0;
        for (int i = n; i <= m; i++) {
            string str = to_string(i);
            for (int j = 0; j < str.length(); j++) {
                if (str[j] == '0') cnt++;
            }
        }
        cout << cnt << '\n';
    }
}