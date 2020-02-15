#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
typedef pair<int, int> P;

int main(){
	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(n-1));
	rep(i, n){
		rep(j, n){
			cin >> a[i][j];
			a[i][j]--;
		}
		reverse(a[i].begin(), a[i].end());
	}

	
}
