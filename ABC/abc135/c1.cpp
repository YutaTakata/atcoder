#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n, i=0;
	std::cin >> n;
	int a[n+1]={}, b[n]={};
	long ans = 0;
	for(i=0; i<= n; i++) cin >> a[i];
	for(i=0; i< n; i++) cin >> b[i];
	for( i=0 ; i < n; i++ ){
		int left = min(a[i], b[i]);
		ans += left;
		a[i] -= left;
		b[i] -= left;

		int right = min(a[i+1], b[i]);
		ans += right;
		a[i+1] -= right;
		b[i] -= right;
	}
	cout << ans;
	return 0;
}
