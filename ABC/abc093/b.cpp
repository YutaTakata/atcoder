#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	int a, b, k; cin >> a >> b >> k;
	set<int> st;
	for(int i = a; i < a+k; ++i){
		if(i <= b)st.insert(i);
	}
	for(int i = b; i > b - k; --i){
		if(i >= a)st.insert(i);
	}
	for(auto itr : st){
		cout << itr << endl;
	}
}
