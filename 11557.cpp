#include <iostream>
#include <string>
using namespace std;

struct alchol {
    string school;
    int c;
};

int main() {
    int t, n, max = 0, tmp;
    cin >> t;
    while (t--) {
        cin >> n;
        alchol *a = new alchol[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i].school >> a[i].c;
            if (max < a[i].c) {
                max = a[i].c;
                tmp = i;
            }
        }
        cout << a[tmp].school << '\n';
    } 
}