#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	vector<long long> a(n);
	for(int i = 0; i < n; ++i) cin >> a[i];
	sort(a.begin(), a.end());
	for(int i = 0; i < m; ++i){
		int b;
		long long c;
		cin >> b >> c;
		int j = 0;
		while(b){
			if(a[j] < c){
				a[j] = c;
				b--;
				j++;
			}
			else break;
		}
		sort(a.begin(), a.end());
	}
	long long ans = accumulate(a.begin(), a.end(), 0.0);
	cout << ans << endl;
}
