#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    ll A, B, K; cin >> A >> B >> K;
    if(A + B <= K){
        cout << 0 << " " << 0 << endl;
    }
    else{
        if(A <= K){
            cout << 0 << " " << A + B - K << endl;
        }
        else{
            cout << A - K << " " << B << endl;
        }
    }
}