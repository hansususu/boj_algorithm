#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cstring>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 50
#define MAXC 13
#define INF 987654321
using namespace std;

int n,m;
int ans;

int map[MAX][MAX];
bool check[MAXC];

vector<pair<int, int>> home;
vector<pair<int, int>> chicken;

int calc(pair<int,int> a, pair<int,int> b){
    return abs(a.first-b.first) + abs(a.second-b.second);
}

void dfs(int ind,int cnt){
    if(cnt == m){
        int sum = 0;
        for(pair<int,int> h : home){
            int dist = INF;
            for(int i=0; i<chicken.size(); i++){
                if(check[i])
                    dist = min(dist,calc(h, chicken[i]));
            }
            sum += dist;
        }
        ans = min(ans,sum);
        return;
    }
    
    // DFS
    for(int i=ind; i<chicken.size(); i++){
        if(!check[i]){
            check[i] = true;
            dfs(i,cnt+1);
            check[i] = false;
        }
    }
}

int main(int argc, const char * argv[]) {
    // cin,cout 속도향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> map[i][j];
            if(map[i][j] == 2)
                chicken.push_back(make_pair(i, j));
            else if(map[i][j] == 1)
                home.push_back(make_pair(i, j));
        }
    }
    
    // 초기화
    memset(check, false, sizeof(check));
    ans = INF;
    dfs(0,0);
    cout << ans << endl;
}