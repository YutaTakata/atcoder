#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	set<ll> s;
	cin >> n;
	for(int i = 0; i < n; ++i){
		ll a;
		cin >> a;
		if(s.count(a) == 1){
			s.erase(a);
		}
		else{
			s.insert(a);
		}
	}
	cout << s.size() << endl;
}
