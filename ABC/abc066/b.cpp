#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	string s; cin >> s;
	int n = s.size() - 2;
	while(n>0){
		if(s.substr(0, n/2) == s.substr(n/2, n/2)){
			cout << n << endl;
			return 0;
		}
		else n -= 2;
	}
	
}
