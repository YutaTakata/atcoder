#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	for(int i = 0; i <= b; i++){
		if(i * a % b == c){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
}
