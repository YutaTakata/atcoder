#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int cnt1 = 0, cnt0 = 0;
	for(int i = 0; i < s.size(); ++i){
		if(s[i] == '0') cnt0++;
		else cnt1++;
	}
	if(cnt0 > cnt1) cout << cnt1 * 2 << endl;
	else if (cnt0 == cnt1) cout << cnt0 * 2 << endl;
	else cout << cnt0 * 2 << endl;
}
