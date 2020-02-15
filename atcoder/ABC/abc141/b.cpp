#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	string s; cin >> s;
	bool flag = true;
	for(int i = 0; i < s.size(); ++i){
		if(i % 2 == 0){
			if(s[i] == 'R' || s[i] == 'U' || s[i] == 'D') flag = true;
			else{
				puts("No");
				return 0;
			}
		}
		else{
			if(s[i] == 'L' || s[i] == 'U' || s[i] == 'D') flag = true;
			else {
				puts("No");
				return 0;
			}
		}
	}
	if(flag) puts("Yes");
}
