#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int maxv = max(a, c);
	int minv = min(b, d);
	if(maxv > minv) cout << 0 << endl;
	else cout << minv - maxv << endl;
}
