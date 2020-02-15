#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(){
    ll N; cin >> N;
    vector<ll> A(N);
    rep(i, N){
        cin >> A[i];
    }
    vector<bool> flag(1e9+1000, false);
    rep(i, N){
        if(flag[A[i]]){
            cout << "NO" << endl;
            return 0;
        }
        else{
            flag[A[i]] = true;
        }
    }
    cout << "YES" << endl;
}