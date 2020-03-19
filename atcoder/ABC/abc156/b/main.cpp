#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(){
	    ll N;
        int K;
        cin >> N >> K;
        int ans = 1;
        ll temp = K;
        while(temp <= N){
            temp *= K;
            ans++;
        }
        cout << ans << endl;
}
