#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string S;
    cin >> S;
    int N;
    N = S.size();
    ll ans = 0;

    for(int bit = 0; bit < (1<<(N-1)); bit++){
        ll sm = 0;
        ll a = S[0] - '0';
        for(int i = 0; i < N-1; i++){
            if(bit & (1<<i)){
                sm += a;
                a = 0;
            }
            a = a * 10 + S[i+1] - '0';
        }
        sm += a;
        ans += sm;
    }
    cout << ans << endl;
}