#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    int N;
    cin >> N;
    int res = ceil(N/1.08);
    int ans = floor(res* 1.08);
    if(ans == N){
        cout << res << endl;
    }
    else cout << ":(" << endl;
}