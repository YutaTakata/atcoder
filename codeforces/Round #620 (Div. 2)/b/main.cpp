#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(){
    int N, M; cin >> N >> M;
    vector<vector<char>> S(N, vector<char>(M));
    rep(i, N){
        rep(j, M) cin >> S[i][j];
    }

    vector<int> a(N, -1);
    string s = "";
    rep(i, N-1){
        string rev = reverse(S[i], S[i] + M);
        if(rev == S[i]){
            a[i] = 0;
            s = a[i];
            continue;
        }
        for(int j = i+1; j < N; ++j){
            if(rev == S[j]) a[i] = 1;
        }
    }

    string ans = "";
    rep(i, N){
        if(a[i] == 1) ans += S[i];
    }
    string ans_rev = reverse(begin(ans), end(ans));
    string res = ans + s + ans_rev;
    cout << max(0, int(res.size())) << endl;
    cout << res << endl;
}