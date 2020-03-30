#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(){
	    int N; cin >> N;
        vector<int> A(N, 0);
        vector<ll> cnt(N, 0);
        ll sum = 0;
        rep(i, N){
            int a; cin >> a;
            a--;
            A[i] = a;
            cnt[a]++;
        }

        rep(i, N){
            if(cnt[i] == 0 || cnt[i] == 1) continue;
            sum += cnt[i] * (cnt[i] - 1) / 2;
        }

        rep(i, N){
            cout << sum - (cnt[A[i]] - 1) << endl;
        }
}
