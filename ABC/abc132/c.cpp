#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  rep(i, n) cin >> v[i];
  sort(v.begin(), v.end());

  int ans = v[v.size()/2] - v[v.size()/2 - 1];

  cout << ans << endl;
  return 0;
}
