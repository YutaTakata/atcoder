#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k;
  int a[100];
  cin >> n >> k;
  for(int i = 0; i < n; ++i) cin >> a[i];

  sort(a, a + n, greater<int>());
  int ans = 0;
  for( int i = 0; i < k; ++i ) {
    ans += a[i];
  }
  cout << ans << endl;
  return 0;
}
