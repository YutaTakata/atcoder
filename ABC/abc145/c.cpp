#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;

ll factorial(int N){
    int ans = 1;
    for(int i = 2; i <= N; ++i){
        ans *= i;
    }
    return ans;
}

int main(){
    int N;
    cin >> N;
    vector<int> x(N), y(N);
    rep(i, N) cin >> x[i] >> y[i];

    ll comb = factorial(N);
    ll constance = 2 * factorial(N-1);

    double ans = 0;

    for(int i = 0; i < N-1; i++){
        for(int j = i+1; j < N; ++j){
            double dis = sqrt((x[i] - x[j])*(x[i] - x[j]) + (y[i] - y[j])*(y[i] - y[j])) * constance;
            ans += dis;
        }
    }
    ans /= comb;
    cout << fixed << setprecision(8);
    cout << ans << endl;
}