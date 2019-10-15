#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; ++i){
		cin >> v[i];
	}
	sort(v.begin(), v.end(), greater<int>());
	int ans = accumulate(v.begin(), v.end(), 0) - v[0]/2;
	cout << ans << endl;
}
