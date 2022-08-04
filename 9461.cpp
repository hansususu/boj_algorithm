#include <iostream>
using namespace std;

long long par[101] = {0, 1, 1, };
long long p(int N) {
    if (N < 3) return par[N];
    else if (par[N] == 0) par[N] = p(N-2) + p(N-3);
    return par[N];
}

int main() {
    int T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        cout << p(N) << '\n';
    }
}