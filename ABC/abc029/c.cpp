#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;

void f(int rest, string s){
    if(rest == 0){
        cout << s << endl;
    }
    else{
        for(char c = 'a'; c <= 'c'; ++c){
            f(rest-1, s + c);
        }
    }
}

int main(){
    int N; cin >> N;
    f(N, "");

}