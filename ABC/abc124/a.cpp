#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	int ans = 0;
	cin >> a >> b;
	if(a > b) ans = 2*a - 1;
	else if(a == b) ans = 2*a;
	else ans = 2*b - 1;
	cout << ans << endl;
}
