#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	string o, e;
	cin >> o >> e;
	for(int i = 0; i < o.size() + e.size(); ++i){
		if(i % 2 == 0) cout << o[i/2];
		else cout << e[i/2];
	}
}
