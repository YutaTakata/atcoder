#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<vector<int>> G(12, vector<int>(12, 0));
    for(int i = 0; i < m; ++i){
        int x, y; cin >> x >> y;
        x--, y--;
        G[x][y] = 1;
        G[y][x] = 1;
    }

    int ans = 1;
    for(int bit = 0; bit < (1<<n); ++bit){
        vector<int> as;
        for(int i = 0; i < n; ++i){
            if(bit & (1<<i)) as.push_back(i);
        }

        bool flag = true;
        for(auto a : as){
            for(auto b : as){
                if(a == b) continue;
                if(!G[a][b]) flag = false;
            }
        }
        if(flag) ans = max(ans, (int)as.size());
    }
    cout << ans << endl;
}