#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, t;
	cin >> n >> t;
	vector<pair<int, int>> time(n);
	for(int i = 0; i < n; ++i){
		int a, b;
		cin >> a >> b;
		time[i].first = a;
		time[i].second = b;
	}
	sort(time.begin(), time.end());
	for(int i = 0; i < n; ++i){
		if(time[i].second <= t){
			cout << time[i].first << endl;
			return 0;
		}
	}
	cout << "TLE" << endl;
}
