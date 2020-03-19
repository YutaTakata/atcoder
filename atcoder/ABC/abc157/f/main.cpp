#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(){
	    int N, K; cin >> N >> K;
        vector<int> X(N);
        vector<int> Y(N);
        vector<int> C(N);
        rep(i, N){
            cin >> X[i] >> Y[i] >> C[i];
        }

        double xg = 0, yg =0;
        double sum_C = 0., sum_x = 0., sum_y = 0.;
        rep(i, N){
            sum_C += C[i];
            sum_x += C[i] * X[i];
            sum_y += C[i] * Y[i];
        }
        xg = sum_x / sum_C;
        yg = sum_y / sum_C;
        
}
