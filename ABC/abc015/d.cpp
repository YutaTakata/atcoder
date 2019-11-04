#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int W, N, K; 
int width[55], value[55];
int dp[55][55][10010];


int main(){
    cin >> W >> N >> K;
    rep(i, N){
        cin >> width[i] >> value[i];
    }

    for(int i = 0; i <= W; ++i) dp[0][0][i] = 0;

    rep(i, N){
        for(int j = 0; j <= K; ++j){
            for(int w = 0; w <= W; ++w){
                if(w >= width[i]) dp[i+1][j+1][w] = max({dp[i][j][w-width[i]] + value[i], dp[i][j+1][w], dp[i][j][w]});
                else dp[i+1][j+1][w] = max(dp[i][j+1][w], dp[i][j][w]);
            }
        }
    }

    cout << dp[N][K][W] << endl;
    return 0;
    
}
