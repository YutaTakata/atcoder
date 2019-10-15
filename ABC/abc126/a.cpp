#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	string s;
	cin >> n >> k >> s;
	char tmp = s[k - 1];
	s[k - 1] = tolower(tmp);
	cout << s << endl;
}
