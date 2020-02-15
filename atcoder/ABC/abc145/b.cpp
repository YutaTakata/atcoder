#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;
    if(N % 2 != 0){
        cout << "No" << endl;
    }
    else{
        bool flag = true;
        for(int i = 0; i < N/2; ++i){
            if(S[i] != S[i + N/2]) flag = false;
        }
        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}