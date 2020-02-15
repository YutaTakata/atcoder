#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, t, a;
  cin >> n >> t >> a;
  int index = 0, h;
  double T;
  double ans = 1000;
  for( int i = 0; i < n; i++ ) {
    cin >> h;
    T = t - h * 0.006;
    if( abs( T - a ) < ans ) {
      ans = abs( T - a );
      index = i;
    }
  }
  cout << index + 1 << endl;
  return 0;
}
