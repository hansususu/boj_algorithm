#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, house[1001][3] = { 0 }, cost[3];
    cin >> n;
    for (int i = 1; i<=n; i++) {
        cin >> cost[0] >> cost[1] >> cost[2];
        house[i][0] = min(house[i-1][1], house[i-1][2]) + cost[0];
        house[i][1] = min(house[i-1][0], house[i-1][2]) + cost[1];
        house[i][2] = min(house[i-1][1], house[i-1][0]) + cost[2];
    } 
    cout << min(house[n][2], min(house[n][0], house[n][1]));
}