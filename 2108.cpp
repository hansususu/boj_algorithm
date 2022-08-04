#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

vector<int> arr;

int main() {
    int n, tmp, range, middle = 0, most_val, mean = 0;
    int most = -9999;
    int num[8001] = { 0 };
    bool not_first = false;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        arr.push_back(tmp);
        mean += tmp;
        num[tmp+4000]++;
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < 8001; i++) {
        if (num[i] == 0) continue;
        if (num[i] == most) {
            if (not_first) {
                most_val = i - 4000;
                not_first = false;
            }
        }
        if (num[i] > most) {
            most = num[i];
            most_val = i - 4000;
            not_first = true;
        }
    }
    middle = arr[arr.size()/2];
    mean = round((float)mean/n);
    range = arr.back() - arr.front();
    cout << mean << '\n' << middle << '\n' << most_val << '\n' << range;
}