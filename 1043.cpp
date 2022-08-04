#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAX = 50 + 1;

vector<int> parties[MAX];
int revealed[MAX];
bool participatedparties[MAX][MAX];
bool revealedparty[MAX];

int main() {
    int n, m;
    cin >> n >> m;

    int tr;
    cin >> tr;

    for (int i = 0; i < tr; i++) {
        int idx;
        cin >> idx;
        revealed[idx]++;
    }
    queue<int> q;
    for (int i = 0; i < m; i++) {
        int num; 
        cin >> num;
        for (int j = 0; j < num; j++) {
            int idx;
            cin >> idx;
            participatedparties[i][idx] = true;
            if (revealed[idx] && revealedparty[i] == false) {
                revealedparty[i] = true;
                q.push(i);
            }
            for (int k = 0; k < i; k++) {
                bool has = participatedparties[k][idx];
                if (has) {
                    parties[k].push_back(i);
                    parties[i].push_back(k);
                }
            }
        }
    }
    while (!q.empty()) {
        int idx = q.front();
        q.pop();
        for (int i = 0; i < parties[idx].size(); i++) {
            int p = parties[idx][i];

            if (revealedparty[p] == false) {
                revealedparty[p] = true;
                q.push(p);
            }
        }
    }

    int res = 0;
    for (int i = 0; i < m; i++) {
        if (revealedparty[i] == false) res++;
    }
    cout << res;
}