#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	int n, m;
	cin >> n;
	vector<int> t(n);
	rep(i, n) cin >> t[i];
	int sum = accumulate(t.begin(), t.end(), 0);
	cin >> m;
	rep(i, m){
		int a, b;
		cin >> a >> b;
		a--;
		int tmp = sum + b - t[a];
		cout << tmp << endl;
	}
	
}
