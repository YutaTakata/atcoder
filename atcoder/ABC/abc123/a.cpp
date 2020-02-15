#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[6];
	for(int i = 0; i < 6; ++i) cin >> a[i];
	for(int i = 0; i < 4; ++i){
		for(int j = i + 1; j < 5; ++j){
			if(abs(a[i] - a[j]) > a[5]){
				cout << ":(" << endl;
				return 0;
			}
		}
	}
	cout << "Yay!" << endl;
}
