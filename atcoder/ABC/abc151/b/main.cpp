#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(){
	    int N, K, M; cin >> N >> K >> M;
        vector<int> A(N-1);
        rep(i, N-1) cin >> A[i];

        int sum = 0;
        rep(i, N-1) sum += A[i];
        if(N*M - sum > K) cout << -1 << endl;
        else cout << max(0, N*M - sum) << endl;
}
