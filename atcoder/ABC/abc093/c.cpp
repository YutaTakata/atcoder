#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c, sum = 0, maxv;
	cin >> a >> b >> c;
	sum = a + b + c;
	maxv = max(a, b);
	maxv = max(maxv, c);
	int calc = (3 * maxv - sum + 1) / 2;
	int ans;
	if( sum % 2 == 0 ){
		if(maxv % 2 == 0) ans = calc;
		else ans = calc + 1;
	}
	else{
		if( maxv % 2 != 0 ) ans = calc;
		else ans = calc + 1;
	}
	cout << ans << endl;
}
