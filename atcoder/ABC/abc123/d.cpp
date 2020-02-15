#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using Data = pair<ll, vector<int>>;

int main(){
	vector<ll> N(3);
	int K;
	for(int i = 0; i < 3; ++i) cin >> N[i]; cin >> K;
	vector<vector<ll>> v(3);
	for(int iter = 0; iter < 3; ++iter){
		v[iter].resize(N[iter]);
		for(int i = 0; i < N[iter]; ++i) cin >> v[iter][i];
		sort(v[iter].begin(), v[iter].end(), greater<ll>());
	}
	priority_queue<Data> que;
	set<Data> se;
	que.push(Data(v[0][0] + v[1][0] + v[2][0], vector<int>({0,0,0})));
	for(int k = 0; k < K; ++k){
		auto c = que.top();que.pop();
		cout << c.first << endl;

		for(int iter = 0; iter < 3; ++iter){
			if(c.second[iter] + 1 < N[iter]){
				ll sum = c.first - v[iter][c.second[iter]] + v[iter][c.second[iter] + 1];
				auto num = c.second; num[iter]++;
				auto d = Data(sum, num);

				if(!se.count(d)) se.insert(d), que.push(d);
			}
		}
	}
}
