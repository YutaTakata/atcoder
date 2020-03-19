#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(){
	    int N;
        cin >> N;
        vector<int> X(N);
        rep(i, N){
            cin >> X[i];
        }
        int sum = 0;
        rep(i, N){
            sum += (X[i] - X[0]);
        }
        
        int g = round(sum / (double)N + X[0]);
        int ans = 0;
        rep(i, N){
            ans += (X[i] - g) * (X[i] - g);
        }
        cout << ans << endl;
}
