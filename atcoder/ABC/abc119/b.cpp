#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	string s;
	double money;
	double ans = 0;
	for(int i = 0; i < n; ++i){
		cin >> money >> s;
		if(s == "JPY") ans += money;
		else ans += 380000.0 * money;
	}
	cout << fixed;
	cout << setprecision(6);
	cout << ans << endl;
}
