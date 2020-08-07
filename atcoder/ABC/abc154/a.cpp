#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(){
    string S, T; cin >> S >> T;
    int A, B; cin >> A >> B;
    string U; cin >> U;
    if( U == S){
        cout << A - 1 << " " << B;
    }
    else{
        cout << A << " " << B-1;
    }
}
