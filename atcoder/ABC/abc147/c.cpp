#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    int N; cin >> N;
    vector<vector<int>> x(N);
    vector<vector<int>> y(N);
    vector<int> a(N);
    for(int i = 0; i < N; ++i){
        cin >> a[i];
        x[i].resize(a[i]);
        y[i].resize(a[i]);
        for(int j = 0; j < a[i]; ++j){
            int a, b; cin >> a >> b;
            --a;--b;
            x[i][j] = a;
            y[i][j] = b;
        }
    }

    int ans = 0;
    for(int bit = 0; bit < (1<<N); ++bit){
        bool flag = true;
        for(int i = 0; i < N; ++i){
            if(!flag) break;
            if(bit & (1<<i)){
                for(int j = 0; j < a[i]; ++j){
                    if(y[i][j] == 1 && (bit & (1<<x[i][j]))) continue;
                    if(y[i][j] == 0 && !(bit & (1<<x[i][j]))) continue;
                    else {
                        flag = false;
                        break;
                    }
                }
            }
        }
        if(flag){
            int bit_num = __builtin_popcount(bit);
            ans = max(ans, bit);
        }
    }
    cout << ans << endl;
}