#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

struct student {
    string name;
    int day, month, year;
};

bool cmp(const struct student& x, const struct student& y){
    if (x.year < y.year) return true;
    else if (x.year == y.year) {
        if (x.month < y.month) return true;
        else if(x.month == y.month) {
            if (x.day < y.day) return true;
            else return false;
        }
        else return false;
    }
    else return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<student> arr;
    for (int i = 0; i < n; i++) {
        string x;
        int a, b, c;
        cin >> x >> a >> b >> c;
        arr.push_back({x, a, b, c});
    }
    sort(arr.begin(), arr.end(), cmp);
    cout << arr[n-1].name << "\n" << arr[0].name;
}