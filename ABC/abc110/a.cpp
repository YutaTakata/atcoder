#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c; cin >> a >> b >> c;
	int maxv = max({a, b, c});
	cout << maxv * 9 + a + b + c  << endl;
}
