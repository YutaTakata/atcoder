#include <bits/stdc++.h>
using namespace std;

int main(){
	int s; cin >> s;
	set<int> se;
	se.insert(s);
	int term = s;
	for(int i = 2; ;++i){
		if( term % 2 == 0 ){
			term /= 2;
			if(se.count(term) == 1){
				cout << i << endl;
				break;
			}
			else se.insert(term);
		}
		else {
			term = 3 * term + 1;
			if(se.count(term) == 1){
				cout << i << endl;
				break;
			}
			else se.insert(term);
		}
	}
}
