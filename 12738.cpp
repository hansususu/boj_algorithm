#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, arr[1000010];
vector<int> v;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        if (v.size() == 0 || v[v.size()-1] < arr[i]){
            v.push_back(arr[i]);
        }
        else {
            int left = 0, right = v.size()-1;
            while (left < right) {
                int mid = (left + right) / 2;
                if (v[mid] >= arr[i]) right = mid;
                else left = mid + 1;
            }
            v[left] = arr[i];
        }
    }
    cout << v.size();
}