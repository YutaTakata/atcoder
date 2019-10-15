#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, L;
  cin >> n >> L;
  vector<int> v(n);
  for( int i = 0; i < n; ++i ) v[i] = L + i;
  int sum = accumulate(v.begin(), v.end(), 0);
  int ans = 0;
  if(L >= 0) ans = sum - *min_element(v.begin(), v.end());
  else if (L + n - 1 < 0) ans = sum -*max_element(v.begin(), v.end());
  else if (L < 0 && L + n - 1 >= 0) ans = sum;
  cout << ans << endl;
  return 0;
}
