#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    ll N; cin >> N;
    ll num = 0;
    ll div = 10;
    if(N % 2 != 0){
        cout << 0 << endl;
        return 0;
    }
    while(div <= N){
        num += N/div;
        div *= 5;
    }
    cout << num << endl;
}