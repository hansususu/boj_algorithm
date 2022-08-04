#include <iostream>
using namespace std;
int t, b, bi, s, si, a[5],ans;
int main() {
    cin >> t;
    while (t--)
    {
        b = 0;
        s = 11;
        bi = 0;
        si = 0;
        ans = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> a[i];
            if (a[i] >= b)//최대값
            {
                b = a[i];
                bi = i;
            }
            if (a[i] < s)//최소값
            {
                s = a[i];
                si = i;
            }
        }
 
        a[bi] = 0;
        a[si] = 0;
        int b1=0, s1=11;
        for (int i = 0; i < 5; i++)
        {
            if (a[i] >= b1)
                b1 = a[i];
            if (a[i] < s1 && a[i]!=0)
                s1 = a[i];
            ans += a[i];
        }
        if (b1 - s1 >= 4) { cout << "KIN" << '\n'; }
        else
            cout << ans<<'\n';
    }
}