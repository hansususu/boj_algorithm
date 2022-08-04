#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<pair<int, int>> vector(8);
    for (int i = 0; i< 8; i++) {
        cin >> vector[i].first;
        vector[i].second = i + 1;
    }
    sort(vector.begin(), vector.end(), greater<pair<int, int>>());

    int sum = 0;
    int idx[5];
    for (int i = 0; i < 5; i++) {
        sum += vector[i].first;
        idx[i] = vector[i].second;
    }
    sort(idx, idx+5);

    cout << sum << '\n';
    for (int i = 0; i < 5; i++) {
        cout << idx[i] << " ";
    }
}