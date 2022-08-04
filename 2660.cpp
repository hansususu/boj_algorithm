#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int d[51][51];
int a, b, num;

int main() {
    cin >> num;
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            if (i==j) continue;
            else d[i][j] = 1000;
        }
    }

    while (1) {
        cin >> a>> b;
        if (a + b == -2) break;
        d[a][b] = 1;
        d[b][a] = 1;
    }

    for (int k = 1; k <= num; k++) {
        for (int i = 1; i <= num; i++) {
            for (int j = 1; j <= num; j++) {
                d[i][j] = min(d[i][j], d[i][k]+d[k][j]);
            }
        }
    }

    int res = 1000;
    vector<int> v;

    for (int i = 1; i <= num; i++) {
        int tmp = 0;
        for (int j = 1; j <= num; j++) {
            tmp = max(tmp, d[i][j]);
        }
        if (tmp < res) {
            v.clear();
            res = tmp;
            v.push_back(i);
        }
        else if(tmp == res) v.push_back(i);
    }
    sort(v.begin(), v.end());
    cout << res << " " << v.size() << '\n';
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}