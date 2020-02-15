#include<bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    string S; cin >> S;

    int ans = 1;
    char tmp = S[0];
    for (int i = 1; i < N; ++i){
        if(tmp == S[i]) continue;
        else {
            tmp = S[i];
            ans++;
        }
    }
    cout << ans << endl;
}