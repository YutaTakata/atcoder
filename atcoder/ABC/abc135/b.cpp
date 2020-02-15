#include <iostream>
using namespace std;

int n, i=0, cnt=0;
int a[50]={};
int main(){
	cin >> n;
	for(i; i < n; i++){
		cin >> a[i];
		if( a[i] != i + 1) cnt++;
	}
	if( cnt == 0 || cnt == 2) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
