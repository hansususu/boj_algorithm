#include <iostream>
#include <string>
using namespace std;

long long L;
string alpa;
long long M = 1234567891;
long long R = 31;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    long long ans = 0;
    cin >> L;
    cin >> alpa;
    for (long long i = 0; i < L; i++) {
        char alphabet = alpa[i];
        alphabet -= ('a'-1);
        long long r= 1;
        for (int j = 1; j <= i; j++) {
            r *= 31;
            if (r > M) r = r % M;
        }
        ans += (long long)alphabet*r;
        if (ans > M) ans = ans % M;
    }
    cout << ans;
}