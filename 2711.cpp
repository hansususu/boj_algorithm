#include <iostream>
#include <string>
using namespace std;

int main() {
    int t, index;
    string str;
    cin >> t;
    while(t--) {
        cin >> index >> str;
        for (int i = 0; i < str.length(); i++) {
            if (i+1 != index) cout << str[i];
        }
        cout << '\n';
    }
}