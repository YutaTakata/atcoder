#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
	int a, b;
	cin >> a >> b;
	int ans = (a + b - 3) / (a - 1);
	cout << ans << endl;
}
