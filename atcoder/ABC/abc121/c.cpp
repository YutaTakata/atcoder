#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, M; cin >> N >> M;
	vector<pair<long long, long long>> drink(N);
	for(int i = 0; i < N; ++i){
		cin >> drink[i].first >> drink[i].second;
	}
	sort(drink.begin(), drink.end());
	long long ans = 0, cnt = 0;
	for(int i = 0; i < N; ++i){
		if(M - drink[i].second > 0){
			ans += drink[i].first * drink[i].second;
			M -= drink[i].second;
		}
		else{
			ans += drink[i].first * M;
			break;
		}
	}
	cout << ans << endl;
}
