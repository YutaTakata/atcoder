#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	int x; cin >> x;
	vector<bool> expo(x+1);
	expo[1] = 1;
	for(int b= 2; b <= x; ++b){
		int v = b * b;
		while(v <= x){
			expo[v] = 1;
			v *= b;
		}
	}
	for(int i = x; i >= 1; i--){
		if(expo[i]) {
			cout << i << endl;
			return 0;
		}
	}
}
