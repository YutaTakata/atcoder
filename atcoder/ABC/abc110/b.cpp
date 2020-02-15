#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, x, y; cin >> n >> m >> x >> y;
	vector<int> X(n), Y(m);
	for(int i = 0; i < n; ++i) cin >> X[i];
	for(int i = 0; i < m; ++i) cin >> Y[i];
	sort(X.begin(), X.end());
	sort(Y.begin(), Y.end());
	for(int i = x+1; i <= y; ++i){
		if(X[n-1] < i && Y[0] >= i) {
			cout << "No War" << endl;
			return 0;
		}
	}
	cout << "War" << endl;
}
