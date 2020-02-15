#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    int N; cin >> N;
    vector<pair<ll, int>> a(N);
    rep(i, N){
        ll b; cin >> b;
        a[i] = make_pair(b, i+1);
    }

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    rep(i,N){
        cout << a[i].second << endl;
    }
}