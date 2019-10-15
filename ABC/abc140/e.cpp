#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll INF = 1LL << 60;

int main(){
	int n;
	cin >> n;
	vector<int> p(n);
	rep(i, n) cin >> p[i];
	int ans = 0, maxv = 0, second = 0;
	for(int i = 0; i < n-1; ++i){
		maxv = max(p[i], p[i+1]);
		second = min(p[i], p[i+1]);
		if(second == n-1) {
			ans += second*(n-1-i);
			continue;
		}
		ans += second;
		for(int j = i+2; j < n; ++j){
			if(maxv < p[j]){
				int tmp = maxv;
				maxv = p[j];
				second = tmp;
			}
			else if (second < p[j]) second = p[j];
			if(second == n-1 ){
				ans += (n-j)*second;
				break;
			}
			ans += second;
		}
	}
	cout << ans << endl;
}
