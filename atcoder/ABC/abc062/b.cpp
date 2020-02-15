#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	int h, w;
	cin >> h >> w;
	char a[h+2][w+2];
	for(int i = 0; i <= h+1; ++i){
		for(int j = 0; j <= w+1; ++j){
			if(i == 0 || i == h+1) a[i][j] = '#';
			else if (j == 0 || j == w+1) a[i][j] = '#';
			else cin >> a[i][j];
		}
	}
	for(int i = 0; i <= h+1; ++i){
		for(int j = 0; j <= w+1; ++j){
			cout << a[i][j];
		}
		cout << endl;
	}
}
