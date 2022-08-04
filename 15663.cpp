#include <iostream>
#include <algorithm>
#define MAX 8
using namespace std;

int n, m;
int arr[MAX], result[MAX];
bool chk[MAX];

void Input(){
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        chk[i]=false;
    }
    sort(arr, arr + n);
}

void DFS(int cnt) {
    if (cnt==m) {
        for (int i=0; i<m; i++)
            cout<<result[i]<<" ";
        cout<<endl;
        return;
    }
    int xdx = 0;
    for (int i=0; i<n; i++) {
        if (!chk[i]&&arr[i]!=xdx) {
            result[cnt]=arr[i];
            xdx=result[cnt];
            chk[i]=true;
            DFS(cnt+1);
            chk[i]=false;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    Input();
    DFS(0);
    return 0;
}