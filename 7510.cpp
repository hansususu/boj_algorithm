#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; 
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tri[3] = { 0 };
        for (int j = 0; j < 3; j++) {
            cin >> tri[j];
        }
        sort(tri, tri+3);
        cout << "Scenario #" << i+1 << ":\n";
        if (tri[0]*tri[0] + tri[1]*tri[1] == tri[2]*tri[2]){
            cout << "yes\n\n";
        }
        else cout << "no\n\n";
    }
}