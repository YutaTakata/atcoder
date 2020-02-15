#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;
	long long k;
	cin >> n >> k;
	int a[n], b[2*n];
	for(int i = 0; i < n; ++i){
		int tmp;
		cin >> tmp;
		a[i] = tmp;
		b[i] = tmp;
		b[i + n] = tmp;
	}

	long long c = 0, d = 0;

	for( int i = n -1; i > 0; --i) {
		for( int j = i - 1; j >= 0; --j){
			if( a[i] < a[j] ) c++;
		}
	}
	for( int i = 2*n - 1; i > 0; ++i){
		for( int j = i - 1; j >= 0; ++j){
			if(b[i] < b[j] ) d++;
		}
	}
	long long ans = ( c * n + (d - c) * k * (k -1) / 2) % (1000000000 + 7);
	cout << ans << endl;
	return 0;
}

