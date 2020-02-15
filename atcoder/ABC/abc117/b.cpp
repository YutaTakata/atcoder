#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; ++i){
		cin >> v[i];
	}
	sort(v.begin(), v.end(), greater<int>());
	int sum = accumulate(v.begin(), v.end(), 0);
	if(v[0] * 2 < sum) cout << "Yes" << endl;
	else cout << "No" << endl;
}
