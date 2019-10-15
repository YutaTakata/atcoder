#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, a, b, c, d, e;
	cin >> n >> a >> b >> c >> d >> e;
	long long minv = min({a, b, c, d, e});
	cout << (n + minv - 1) / minv + 4 << endl;
}
