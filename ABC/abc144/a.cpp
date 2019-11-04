#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    string a, b; cin >> a >> b;
    if(a.size() == 1 && b.size() == 1) cout << stoi(a) * stoi(b) << endl;
    else cout << -1 << endl;
}