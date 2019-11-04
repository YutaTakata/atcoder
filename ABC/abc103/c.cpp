#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    int N, M; cin >> N >> M;
    vector<pair<int, int>> brige(M);
    rep(i, M){
        int a, b; cin >> a >> b;
        a--, b--;
        brige[i] = make_pair(b, a);
    }
    sort(begin(brige), end(brige));

    int res = 1;
    int end = brige[0].first;
    int start = brige[0].second;
    for(int i = 1; i < M; ++i){
        if(brige[i].second >= end){
            ++res;
            end = brige[i].first;
            start = brige[i].second;
        }
    }
    cout << res << endl;
}