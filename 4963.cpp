#include <iostream>
#include <queue>
#include <stdio.h>
#include <cstring>
using namespace std;

#define MAX_SIZE 50

int w, h;
int numland = 0;
int graph[MAX_SIZE][MAX_SIZE];
bool visited[MAX_SIZE][MAX_SIZE];

int dw[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dh[8] = {0, 1, 0, -1, -1, 1, -1, 1};

void bfs(int h, int w) {
    queue< pair<int, int> >q;
    q.push(make_pair(h,w));
    visited[h][w] = true;
    while(!q.empty()) {
        h = q.front().first;
        w = q.front().second;
        q.pop();

        for (int i = 0; i < 8; i++) {
            int nh = h + dh[i];
            int nw = w + dw[i];

            if (0 <= nw && 0 <= nh && nw < MAX_SIZE && nh < MAX_SIZE) {
                if (graph[nh][nw] && !visited[nh][nw]) {
                    visited[nh][nw] = true;
                    q.push(make_pair(nh,nw));
                }
            }
        }
    }
}

int main() {
    while(1) {
        scanf("%d %d", &w, &h);
        if(!w && !h) break;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                scanf("%1d", &graph[i][j]);
            }
        }

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (graph[i][j] && !visited[i][j]) {
                    numland++;
                    bfs(i, j);
                }
            }
        }
        printf("%d\n", numland);

        memset(graph, false, sizeof(graph));
        memset(visited, false, sizeof(visited));
        numland = 0;
    }
}