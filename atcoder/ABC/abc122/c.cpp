#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, Q;
	cin >> N >> Q;
	string S;
	cin >> S;
	int ans[N]={};
	for(int i = 0; i < N; ++i){
		if(S[i] == 'A' && S[i+1] == 'C'){
			ans[i+1] = ans[i] + 1;
		}
		else ans[i+1] = ans[i];
	}
	for(int i = 0; i < Q; ++i){
		int l, r;
		cin >> l >> r;
		cout << ans[r-1] - ans[l-1] << endl;
	}
}
