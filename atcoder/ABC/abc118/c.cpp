#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    int cost[9] = {2, 5, 5, 4, 6, 3, 7, 6};
    int N, M; cin >> N >> M;
    vector<pair<int, int>> p(M);
    rep(i, M){
        int c; cin >> c;
        p[i].first = cost[c-1];
        p[i].second = c;
    }
    sort(begin(p), end(p));
    
}