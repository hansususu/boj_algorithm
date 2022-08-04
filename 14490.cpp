#include <iostream>
#include <string>
using namespace std;

int gcd(int a, int b) {
    if (a% b == 0) return b;
    return gcd(b, a%b);
}

int main() {
    string s;
    cin >> s;
    int a = 0, b = 0, digit= 1;
    bool flag = true;
    for (int i = s.length()-1; i>= 0; i--) {
        if (s[i]==':') {
            digit = 1;
            flag = false;
        }
        else {
            if (flag) {
                b += (s[i]-'0')*digit;
                digit *= 10;
            }
            else {
                a += (s[i]-'0')*digit;
                digit *= 10;
            }
        }
    }
    int igcd = gcd(a, b);
    cout << a/igcd << ":" << b/igcd << endl;
}