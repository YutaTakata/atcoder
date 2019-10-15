#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef  long long ll;

int main() {
  int n;
  cin >> n;
  unordered_map<string, int> mp;
  long long ans = 0;
  vector<string> s(n);
  for(int i = 0; i < n; ++i) cin >> s[i];

  for(int i = 0; i < n; ++i){
	  sort(s[i].begin(), s[i].end());
	  if(mp.count(s[i]) == 0) mp[s[i]] = 1;
	  else mp[s[i]]++;
  }

  for(auto itr = mp.begin(); itr != mp.end(); ++itr){
	  ll tmp = itr->second - 1;
	  ans += (tmp + 1) * tmp / 2;
  }
  cout << ans << endl;
}


