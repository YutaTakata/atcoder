#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, ans = 0, minv =10;
	for(int i = 0; i < 5; ++i){
		cin >> a;
		b = a % 10;
		a = ((a + 9) / 10) * 10;
		ans += a;
		if(minv > b && b != 0) minv = b;
	}
	ans = ans - (10 - minv);
	cout << ans << endl;
}
