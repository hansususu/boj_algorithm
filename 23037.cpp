#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, ans;
    cin >> n;
    int a = n/10000;
    int b = (n-a*10000)/1000;
    int c = (n-a*10000-b*1000)/100;
    int d = (n-a*10000-b*1000-c*100)/10;
    int e = (n-a*10000-b*1000-c*100-d*10);
    ans = pow(a,5)+pow(b,5)+pow(c,5)+pow(d,5)+pow(e,5);
    cout << ans;
}