#include <iostream>
using namespace std;
const int N = 100000;

int main(){
	int a[N],b[N], n;
	cin >> n;
	int monster=0;
	for(int i= 0; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++) cin >> b[i];
	for(int i = 0; i < n; i++){
		int c = b[i] - a[i];
		if(c >= 0 && c >= a[i+1]){
			monster = monster + a[i] + a[i+1];
			a[i] = a[i+1] = 0;
		}
		else if( c >= 0 && c < a[i+1] ){
			monster = monster + a[i] + c;
			a[i] = 0;
			a[i+1] -= c;
		}
		else if(c < 0){
			monster = monster + b[i];
			a[i] -= b[i];
		}
	}
	cout << monster << endl;
	return 0;
}
