#include <bits/stdc++.h>
using namespace std;

int main(){
	int s;
	cin >> s;
	int num2 = s % 100;
	int num1 = s / 100;
	if( num1 >= 1 && num1 <= 12 ){
		if( num2 >= 1 && num2 <= 12 ){
			cout << "AMBIGUOUS" << endl;
		}
		else cout << "MMYY" << endl;
	}
	else{
		if( num2 >= 1 && num2 <= 12 ){
			cout << "YYMM" <<endl;
		}
		else{
			cout << "NA" << endl;
		}
	}
	return 0;
}
