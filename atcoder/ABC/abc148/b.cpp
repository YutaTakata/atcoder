#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    int N; cin >> N;
    string S, T;
    cin >> S >> T;
    rep(i,N){
        cout << S[i] << T[i];
    }
}