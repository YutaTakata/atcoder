#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	int a, b;
	string s;
	cin >> a >> b >> s;
	for(int i = 0; i < a; ++i){
		if(!('0' <= s[i] && s[i] <= '9')){
			cout << "No" << endl;
			return 0;
		}
	}
	if(s[a] != '-'){
		cout << "No" << endl;
		return 0;

	}
	for(int i = a+1; i < a+b; ++i){
		if(!('0' <= s[i] && s[i] <= '9')){
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}
