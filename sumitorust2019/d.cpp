#include<bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

// res[i][c] := i 文字目以降で最初に文字 c が登場する index (存在しないときは n)
vector<vector<int> > calcNext(const string &S) {
    int n = (int)S.size();
    vector<vector<int> > res(n+1, vector<int>(10, n));
    for (int i = n-1; i >= 0; --i) {
        for (int j = 0; j < 10; ++j) res[i][j] = res[i+1][j];
        res[i][S[i]] = i;
    }
    return res;
}


int main() {
    // 入力
    int n; cin >> n;
    string S; cin >> S;


    // 前処理配列
    vector<vector<int> > next = calcNext(S);

    // DP
    vector<vector<long long>> dp(n+1,vector<long long>(n+1, 0));
    dp[0][0] = 1; // 初期化、空文字列 "" に対応
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 10; ++j) {
            for(int k = 0; k < n; ++k){
                if (next[i][j] >= n) continue; // 次の文字 j がもうない場合はスルー
                dp[k+1][next[i][j] + 1] += dp[k][i];
            }
        }
    }

    // 集計
    long long res = 0;
    for (int i = 0; i <= n; ++i) {
        res += dp[3][i];
        cout  << dp[3][i];
    }

    cout << res << endl;
}