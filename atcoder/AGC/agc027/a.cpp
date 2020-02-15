#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, x;
  cin >> n >> x;
  int ans = 0;
  vector<int> a(n);
  for( int i = 0 ; i < n ; ++i ) cin >> a.at(i);
  sort(a.begin(), a.end());
  for( int i = 0; i < n; ++i ){
    if(a.at(i) <= x){
      x -= a.at(i);
      ans++;
    }
  }
  if(x>0 && n == ans) ans--;
  cout << ans << endl;
  return 0;
}
