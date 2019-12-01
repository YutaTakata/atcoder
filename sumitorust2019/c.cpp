#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    int X; cin >> X;
    int cnt = X / 100;
    int rem = X % 100;
    if(cnt == 0){
        cout << 0 << endl;
        return 0;
    }
    else{
        if(rem == 0){
            cout << 1 << endl;
            return 0;
        }
        else{
            for(int i = 0; i <= rem/5; ++i){
                for(int j = 0; j <= rem/4; ++j){
                    for(int k = 0; k <= rem/3; ++k){
                        for(int l = 0; l <= rem/2; ++l){
                            for(int m= 0; m <= rem; ++m){
                                if(5*i + 4*j + 3*k + 2*l + m == rem && i+j+k+l+m <= cnt){
                                    cout << 1 << endl;
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << 0 << endl;
    }
}