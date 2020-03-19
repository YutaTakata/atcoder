#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(){
	    int N, M; cin >> N >> M;
        vector<int> s(M);
        vector<int> c(M);
        rep(i, M){
            int a, b;
            cin >> a >> b;
            a--;
            s[i] = a; c[i] = b;
        }
        vector<int> check(N, -1);
        rep(i, M){
            if(N != 1){
                if(s[i] == 0 && c[i] == 0){
                    cout << -1 << endl;
                    return 0;
                }
            }
            if(check[s[i]] == -1){
                check[s[i]] = i;
            }
            else{
                if(c[i] != c[check[s[i]]]){
                    cout << -1 << endl;
                    return 0;
                }
            }
        }

        vector<int> ans(N, 0);
        rep(i, M){
            ans[s[i]] = c[i];
        }
        if(N != 1 && ans[0] == 0) ans[0] = 1;
        rep(i, 3) cout << ans[i];


}
