#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int cnt = 0;
	int ans = 0;
	for(int i = 0; i < s.size(); ++i){
		if(s[i] == 'A' || s[i] == 'T' || s[i] == 'G' || s[i] == 'C') cnt++;
		else cnt = 0;
		ans = max(ans, cnt);
	}
	cout << ans;
}
