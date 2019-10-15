#include <bits/stdc++.h>
using namespace std;

int main(){
	string s, t, t2;
	cin >> s >> t;
	t2 = t + t;
	if(t2.find(s) != string::npos) cout << "Yes" << endl;
	else cout << "No" << endl;
}
