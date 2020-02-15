#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a(n + 1, 0);
	for(int i = 0; i < n; ++i){
		cin >> a[i+1];
	}
	int ans = 0;
	vector<bool> visited(n + 1, false);
	visited[1] = true;
	int next = a[1];
	while(true){
		if(visited[next]){
			ans = -1;
			break;
		}
		ans++;
		if( next == 2 ){
			break;
		}
		visited[next] = true;
		next = a[next];
	}
	cout << ans << endl;
}
