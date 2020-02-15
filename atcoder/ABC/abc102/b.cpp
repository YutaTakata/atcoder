#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a, maxv =1, minv = 1000000000;
  for( int i = 0; i < n; i++ ) {
    cin >> a;
    maxv = max(a, maxv);
    minv = min(a, minv);
  }   
  int ans = maxv - minv;
  cout << ans << endl;
  return 0;
}

