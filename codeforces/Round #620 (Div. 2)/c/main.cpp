#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(){
    int Q; cin >> Q;
    while(Q--){
        int N;
        ll M;
        cin >> N >> M;

        vector<ll> T(N);
        vector<ll> L(N);
        vector<ll> H(N);
        rep(i, N){
            cin >> T[i] >> L[i] >> H[i];
        }

        ll minv = M;
        ll maxv = M;
        rep(i, N){
            if(!i){
                if(M+T[i] < L[i] || H[i] < T[i] - M){
                    cout << "NO" << endl;
                    break;
                }
                maxv = min(M+T[i], H[i]);
                minv = max(M-T[i], L[i]);
            }
            else{
                ll t = T[i] - T[i-1];
                if(maxv + t < L[i] || H[i] << minv - t){
                    cout << "NO" << endl;
                    break;
                }
                maxv = min(maxv+t, H[i]);
                minv = max(minv-t, L[i]);
            }
        }
        cout << "YES" << endl;
    }
}