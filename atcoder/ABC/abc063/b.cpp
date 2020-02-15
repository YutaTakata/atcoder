#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	set<char> st;
	string s; cin >> s;
	for(int i = 0; i < s.size(); ++i){
		if(st.count(s[i]) > 0) {
			puts("no");
			return 0;
		}
		else st.insert(s[i]);
	}
	puts("yes");
}
