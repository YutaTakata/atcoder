#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    int N; cin >> N;
    vector<int> a(N);
    rep(i, N) cin >> a[i];
    int num = 0;
    rep(i, N){
        if(a[i] == num + 1){
            num = a[i];
        }
    }
    if(num == 0){
        cout << -1 << endl;
        return 0;
    }
    cout << N - num << endl;
}