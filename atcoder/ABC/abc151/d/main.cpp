#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef vector<vector<int>> Graph;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
	    int H, W; cin >> H >> W;
        vector<string> S(H);
        rep(i, H) cin >> S[i];

        int ans = 0;
        rep(i, H){
            rep(j, W){
                if(S[i][j] == '#') continue;
                Graph dist(H, vector<int>(W, -1));
                queue<pair<int, int>> que;

                dist[i][j] = 0;
                que.push(make_pair(i, j));

                while(!que.empty()){
                    int x = que.front().first;
                    int y = que.front().second;
                    que.pop();
                    rep(dir, 4){
                        int n_x = x + dx[dir];
                        int n_y = y + dy[dir];
                        if(n_x < 0 || n_x >= H || n_y < 0 || n_y >= W) continue;
                        if(S[n_x][n_y] == '#') continue;
                        if(dist[n_x][n_y] == -1){
                            que.push(make_pair(n_x, n_y));
                            dist[n_x][n_y] = dist[x][y] + 1;
                        }
                    }
                }
                rep(ix, H){
                    rep(jy, W){
                        if(dist[ix][jy] == -1) continue;
                        ans = max(ans, dist[ix][jy]);
                    }
                }
            }
        }
        cout << ans << endl;
}
