#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int cnt = 0;
	if(s[0] != 'A'){
		cout << "WA";
		return 0;
	}
	else{
		for(int i = 1; i < s.size(); ++i){
			if(isupper(s[i])){
				if(i == 1 || i == s.size() - 1 || s[i] != 'C'){
					cout << "WA";
					return 0;
				}
				++cnt;
			}
		}
	}
	if(cnt != 1) cout << "WA";
	else cout << "AC";
}
