#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	char a[3];
	int sum = 0;
	for(int bit = 0; bit < (1<<3); bit++){
		sum =(s[0] - '0');
		for(int i = 0; i <3; i++){
			if(bit & (1<<i)){
				sum -= (s[i+1]-'0');
				a[i] = '-';
			}
			else{
				sum += (s[i+1]-'0');
				a[i] = '+';
			}
		}
		if(sum == 7){
			cout << s[0] << a[0] << s[1] << a[1] << s[2] << a[2] << s[3] << "=7" << endl;
			return 0;
		}
	}
}
