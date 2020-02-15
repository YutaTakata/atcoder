#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;

int N, M;
vector<vector<int>> swithes;
vector<int> p;


int main(){
    cin >> N >> M;
    swithes.resize(M);
    p.resize(M);
    rep(i, M){
        int k;
        cin >> k;
        rep(j, k){
            int l;
            cin >> l;
            --l;
            swithes[i].push_back(l);
        }
    }
    rep(i, M) cin >> p[i];
    int ans = 0;

    for(int bit = 0; bit < (1<<N); ++bit){
        bool flag = true;
        rep(i, M){
            int res = 0;
            for(int j = 0; j < swithes[i].size(); ++j){
                if( bit & (1<<swithes[i][j])) res++;
            }
            if(res % 2 == p[i]) continue;
            else{
                flag = false;
                break;
            }
        }
        if(flag) ans++;
    }

    cout << ans << endl;
}