#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(){
	    int N, M; cin >> N >> M;
        vector<bool> ac(N, false);
        vector<int> wa(N, 0);
        vector<int> P(M);
        vector<string> S(M);

        rep(i, M){
            int p; string s;
            cin >> p >> s;
            p--;
            P[i] = p;
            S[i] = s;
        }

        int ans = 0, plt = 0;
        rep(i, M){
            if(ac[P[i]]) continue;
            else{
                if(S[i] == "AC"){
                    ans++;
                    ac[P[i]] = true;
                    plt += wa[P[i]];
                }
                else
                {
                    wa[P[i]]++;
                }
                
            }
        }

        cout << ans << " " << plt << endl;
}
