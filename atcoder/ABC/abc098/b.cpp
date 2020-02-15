#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	int n; cin >> n;
	string s; cin >> s;

	int ans = 0;
	for(int i = 1; i < n; ++i){
		int cnt = 0;
		for(char c = 'a'; c <= 'z'; c++){
			bool left = false, right = false;
			for(int j = 0; j < i; ++j){
				if(s[j] == c) left = true;
			}
			for(int j = i; j < n; ++j){
				if(s[j] == c) right = true;
			}
			if(left && right) cnt++;
		}
		ans = max(ans, cnt);
	}
	cout << ans << endl;
}
