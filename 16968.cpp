#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int ans;
    int numd = 10, numc = 26;
    if (str[0] == 'c') ans = numc;
    else ans = numd;

    for (int i = 1; i < str.length(); i++) {
        if (str[i] == 'c') {
            if (str[i-1] == 'c') ans *= (numc-1);
            else ans *= numc;
        }
        else {
            if (str[i-1] == 'c') ans *= numd;
            else ans *= (numd-1);
        }
    }
    cout << ans;
}