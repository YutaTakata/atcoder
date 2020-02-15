#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    ll X, Y; cin >> X >> Y;
    ll res = 0;
    while(X <= Y){
        X *= 2;
        ++res;
    }
    cout << res << endl;
}