#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	string a, b;
	cin >> a >> b;
	if(a.size() > b.size()) puts("GREATER");
	else if (a.size() < b.size())puts("LESS");
	else{
		for(int i = 0; i < a.size(); ++i){
			if(a[i] > b[i]){
				puts("GREATER");
				return 0;
			}
			else if(a[i] < b[i]){
				puts("LESS");
				return 0;
			}
		}
		puts("EQUAL");
	}
}
