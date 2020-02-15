#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    int N;
    string S;
    cin >> N >> S;
    for(int i = 0; i < S.size(); ++i){
        char cnt = (S[i] - 'A' + N) % 26 + 'A';
        cout << cnt;
    }
}