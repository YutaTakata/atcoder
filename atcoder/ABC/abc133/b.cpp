#include <bits/stdc++.h>
#define rep(i, n) for( int i = 0; i < (int)(n); ++i )
using namespace std;

int main(){
	int n, d; cin >> n >> d;
	vector<vector<int>> vec(n, vector<int>(d));
	int ans =0;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < d; ++j){
			cin >> vec[i][j];
		}
	}
	for(int i = 0; i < n; ++i){
		for(int j = i+1; j < n; ++j){
			int norm = 0;
			for(int k = 0; k < d; ++k){
				int diff = abs(vec[i][k] - vec[j][k]);
				norm += diff * diff;
			}
			bool flag = false;
			for(int k = 0; k <= norm; ++k){
				if(k * k == norm){
					flag = true;
				}
			}
			if(flag) ++ans;
		}
	}
	cout << ans << endl;
}
