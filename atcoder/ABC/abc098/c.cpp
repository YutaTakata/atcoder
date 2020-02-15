#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int count[n+1] ={0};
	for(int i = 0; i < n; i++){
		if(s[i] == 'W') count[i+ 1] = count[i] +1;
		else count[i+1] = count[i];
	}
	int ans = 1e9;
	for(int i = 0; i < n; ++i){
		int left_western = count[i] - count[0];
		int right_western = count[n] - count[i+1];
		int right_eastern = n - 1 - i - right_western;
		int sum = left_western + right_eastern;
		ans = min(ans, sum);
	}
	cout << ans << endl;
	return 0;
}
