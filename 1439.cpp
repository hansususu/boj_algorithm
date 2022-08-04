#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    string s;
    int zero = 0, one = 0, flag;

    cin >> s;

    flag = -1;

    for (int i= 0; i < s.length(); ++i){
        if (flag != 0 && s[i] == '0') {
            flag= 0;
            ++zero;
        }
        else if (flag!= 1 && s[i] == '1'){
            flag = 1;
            ++one;
        }
    }
    cout << min(zero, one) << endl;
}