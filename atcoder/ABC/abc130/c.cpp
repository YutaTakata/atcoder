#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    ll W, H, x, y;
    cin >> W >> H >> x >> y;


    cout << fixed << setprecision(11);
    cout << double(W)*double(H)/2 << " " << (2*x==W && 2*y==H);

}