#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    int N; cin >> N;
    vector<string> a(N);
    rep(i, N) cin >> a[i];
    int ans = 0;
    string res = a[0];
    for(int i = 0; i < N-1; ++i){
        int cnt = 0;
        for(int j = i+1; j <N; ++j){
            if(a[i] == a[j]) cnt++;
        }
        if(cnt >= ans){
            ans = cnt;
            res = a[i];
        }
    }
    cout << res << endl;
}