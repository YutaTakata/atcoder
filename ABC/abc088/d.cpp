#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int H, W;
    cin >> H >> W;

    vector<string> maze(H);
    rep(i,H) cin >> maze[i];

    int num = 0;
    rep(i, H){
        rep(j, W){
            if(maze[i][j] == '.') num++;
        }
    }

    vector<vector<int>> dist(H, vector<int>(W, -1));
    dist[0][0] = 1;
    queue<pair<int, int>> que;
    que.push(make_pair(0, 0));

    while(!que.empty()){
        pair<int, int> current_pos = que.front();
        que.pop();
        int x = current_pos.first;
        int y = current_pos.second;

        rep(i, 4){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || H <= nx || ny < 0 || W <= ny) continue;
            if(maze[nx][ny] == '#') continue;
            if(dist[nx][ny] == -1){
                que.push(make_pair(nx, ny));
                dist[nx][ny] = dist[x][y] + 1;
            }
        }
    }
    if(dist[H-1][W-1] == -1) cout << -1 << endl;
    else cout << num - dist[H-1][W-1] << endl;
}