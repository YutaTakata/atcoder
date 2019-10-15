#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	int n; cin >> n;
	for(int i = 0 ; i < n; ++i){
		string s;
		cin >> s;
		if(s == "Y") {
			cout << "Four" << endl;
			return 0;
		}
	}
	cout << "Three" << endl;
	
}
