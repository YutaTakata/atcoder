#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    int N; cin >> N;
    for(int i = 1; i < 10; ++i){
        if(N % i == 0 && N/i < 10){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}