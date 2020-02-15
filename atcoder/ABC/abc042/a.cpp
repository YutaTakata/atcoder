#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	vector<int> a(3);
	rep(i, 3) cin >> a[i];
	sort(a.begin(), a.end());
	if(a[0] == 5 && a[1] == 5 && a[2] == 7) puts("YES");
	else puts("NO");
}
