#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	set<int> st1 = {1, 3, 5, 7, 8, 10, 12};
	set<int> st2 = {4, 6, 9, 11};
	set<int> st3 = {2};
	int x, y; cin >> x >> y;
	if(st1.count(x) == 1 && st1.count(y) == 1) puts("Yes");
	else if (st2.count(x) == 1 && st2.count(y) == 1) puts("Yes");
	else if (st3.count(x) == 1 && st3.count(y) == 1) puts("Yes");
	else puts("No");
}
