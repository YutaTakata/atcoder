#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;
const double CONST_MIN = 1e-9;


int main(){
    int sx, sy, ex, ey, T, V, N;
    cin >> sx >> sy >> ex >> ey >> T >> V >> N;
    vector<int> x(N);
    vector<int> y(N);
    rep(i, N) cin >> x[i] >> y[i];

    for(int i = 0; i < N; ++i){
        double dis = sqrt(pow((sx - x[i]), 2) + pow((sy - y[i]), 2)) + sqrt(pow((ex - x[i]),2) + pow((ey - y[i]), 2));
        if(T * V >= dis){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}