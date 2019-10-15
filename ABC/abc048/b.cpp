#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll a, b, x;
	cin >> a >> b >> x;
	ll cnt = 0;
	if(a == 0) cout << b/x + 1;
	else cout << b/x - (a-1)/x;
}
