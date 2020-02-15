#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m; cin >> n >> m;
	vector<long long> a(n), b(m), c(m);
	for(int i = 0; i < n; ++i) cin >> a[i];
	sort(a.begin(), a.end());
	b.resize(m);
	c.resize(m);
	for(int i = 0; i < m; ++i) cin >> b[i] >> c[i];

	vector<int> index(m);
	iota(index.begin(), index.end(), 0);
	sort(index.begin(), index.end(), [&](int i, int j) { return c[i] > c[j]; });

	long long sum = 0;
	long long K = 0;
	for( auto i : index ){
		for(int j = 0; j < b[i]; ++j){
			if(K >= n) break;
			sum += max(a[K++], c[i]);
		}
	}
	for(int i = K; i < n; ++i) sum += a[i];
	cout << sum << endl;
}
