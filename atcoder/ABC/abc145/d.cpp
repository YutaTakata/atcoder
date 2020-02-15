#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;
const int INF = 1e9 + 7;

ll factorial(int n){
    ll ans = 1;
    for(int i = 1; i <= n; ++i){
        ans *= i;
    }
    return ans;
}

int main(){
    int X, Y; cin >> X >> Y;
    if((X+Y) % 3 != 0){
        cout << 0 << endl;
    }
    else{
        int n = (2 * Y - X) / 3;
        int m = (2 * X - Y) / 3;
        if(n < 0 || m < 0){
            cout << 0 << endl;
            return 0;
        }
        cout << (factorial(n+m)/(factorial(n)*factorial(m))) % INF;
    }
}