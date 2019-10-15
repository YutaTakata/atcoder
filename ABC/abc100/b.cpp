#include <bits/stdc++.h>
using namespace std;

int main(){
	int d, n;
	cin >> d >> n;
	if(n <= 99){
		cout << int(pow(100.0, d)) * n;
	}
	else {
		cout << int(pow(100.0, d)) * 101;
	}
}
