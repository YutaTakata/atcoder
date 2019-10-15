#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, k; cin >> a >> b >> k;
	int ans[100];
	int cnt = 1;
	int minv = min(a, b);
	for(int i = minv; i >= 1; --i){
		if(a % i == 0&& b % i == 0){
			ans[cnt] = i;
			cnt++;
		}
	}
	cout << ans[k] << endl;
}
