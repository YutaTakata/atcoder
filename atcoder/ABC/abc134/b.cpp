#include <iostream>
using namespace  std;

int main(){
	int n, d;
	cin >> n >> d;
	int ans = 0;
	ans = (n + 2 * d) / (2 * d + 1);
	cout << ans;
	return 0;
}
