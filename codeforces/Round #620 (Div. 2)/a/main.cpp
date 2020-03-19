#include<iostream>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(){
    int  N; cin >> N;
    while(N--){
        ll x, y, a, b; cin >> x >> y >> a >> b;
        if((y - x) % (a + b) == 0){
            cout << (y - x) / (a + b) << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}