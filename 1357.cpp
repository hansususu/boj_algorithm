#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int x, y, sum;
    string a, b, res;

    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    x = stoi(a);
    y = stoi(b);
    sum = x+ y;
    res = to_string(sum);
    reverse(res.begin(), res.end());

    cout << stoi(res) << endl;
}