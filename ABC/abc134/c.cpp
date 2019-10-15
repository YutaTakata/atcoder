#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(size_t i = 0; i < n; i++){
		cin >> v[i];
	}
	vector<int> s = v;
	sort(s.rbegin(), s.rend());
	for(int i = 0; i < n; i++){
		int ans = s[0];
		if( s[0] == v[i] ) ans = s[1];
		cout << ans << endl;
	}
	return 0;
}
