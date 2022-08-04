#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    int N, res = 0;

    cin >> str;
    cin >> N;
    while (N--) {
        string tmp;
        cin >> tmp;
        tmp += tmp;
        if (tmp.find(str) != string::npos) res++;
    }
    cout << res;
}