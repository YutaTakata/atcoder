#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    int N; cin >> N;
    cout << fixed << setprecision(8);
    if(N % 2 == 0){
        cout << 1.0/2 << endl;
    }
    else{
        cout << static_cast<double>(N + 1)/2/N << endl;
    }
}