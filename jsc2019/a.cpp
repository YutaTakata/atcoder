#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
	int m, d;
	cin >> m >> d;
	int cnt = 0;
	for( int i = 1; i <= m; ++i){
		for( int j = 1; j <= d; ++j){
			int d1, d10, tmp;
			d1 = j % 10;
			tmp = j / 10;
			d10 = tmp % 10;
			if( d1 >= 2 && d10 >= 2){
				if( i == d1 * d10){
					cnt++;
				}
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
