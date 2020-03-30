#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using Graph = vector<vector<int>>;

const int dx[2] = {1, 0};
const int dy[2] = {0, 1};
const int INF = -1;
int H, W;
vector<string> field;
Graph cnt;

void dfs(int h, int w){
    for(int dir = 0; dir < 2; ++dir){
        int nh = h + dx[dir];
        int nw = w + dy[dir];

        if(nh >= H || nw >= W) continue;
        if(cnt[nh][nw] == INF){
            if(field[nh][nw] == '#'){
                cnt[nh][nw] = cnt[h][w] + 1;
            }
            else{
                cnt[nh][nw] = cnt[h][w];
            }
        }
        else{
            if(field[nh][nw] == '#'){
                cnt[nh][nw] = min(cnt[nh][nw], cnt[h][w] + 1);
            }
            else
            {
                cnt[nh][nw] = min(cnt[nh][nw], cnt[h][w]);
            }
        }
        dfs(nh, nw);
    }
}

int main(){
        cin >> H >> W;
        field.resize(H);
        rep(i, H) cin >> field[i];
        cnt.assign(H, vector<int>(W, INF));

        
        if(field[0][0] == '#') cnt[0][0] = 1;
        else cnt[0][0] = 0;
        dfs(0,0);
        cout << cnt[H-1][W-1] << endl;
}
