#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m; cin >> n >> m;
	int minv = 0, maxv = 1000000;
	for( int i = 0; i < m; ++i ){
		int left, right; cin >> left >> right;
		if(right > maxv && left < minv) continue;
		else if (left > maxv || right < minv) {
			cout << 0 << endl; 
			return 0;
		}
		else if (right <= maxv && left >= minv){
			maxv = right;
			minv = left;
		}
		else if (right > maxv && left <= maxv && left >= minv) minv = left;
		else maxv = right;
	}
	cout << maxv - minv + 1 << endl;
}
