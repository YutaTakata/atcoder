#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	unordered_set<string> st;
	string b;
	for(int i = 0; i < n; ++i){
		string a;
		cin >> a;
		if(st.count(a) != 0){
			cout << "No" << endl;
			return 0;
		}
		else{
			if(i){
				if(b.back() != a.front()){
					cout << "No" << endl;
					return 0;
				}
			}
		}
		st.insert(a);
		b = a;
	}
	cout << "Yes" << endl;
}
