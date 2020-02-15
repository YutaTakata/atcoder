#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, x, a[200];
  cin >> n >> x;
  int minv = 1100;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    x -= a[i];
    minv = min(minv, a[i]);
  }
  int cnt = n + ( x / minv );
  cout << cnt << endl;
  return 0;
}
