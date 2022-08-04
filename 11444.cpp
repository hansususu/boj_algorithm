#include <iostream>
#include <vector>
using namespace std;
#define MOD 1000000007
#define MAX 100001

typedef vector<vector<long long> > matrix;

matrix operator*(matrix &a, matrix &b) {
    matrix tmp(2, vector<long long>(2));

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                tmp[i][j] += a[i][k] * b[k][j];
            }
            tmp[i][j] %= MOD;
        }
    }
    return tmp;
}

int main() {
    long long n;
    cin >> n;
    matrix ans = {{1,0}, 
                    {0,1}};
    matrix a = {{1,1}, 
                    {1,0}};

    while (n > 0) {
        if (n % 2 == 1) {
            ans = ans * a;
        }
        a = a * a;
        n /= 2;
    }
    cout << ans[0][1] << '\n';
}