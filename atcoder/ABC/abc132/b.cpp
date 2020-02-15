#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;

int main(){
  int n, a[20];
  cin >> n;
  rep(i, n) cin >> a[i];
  int cnt =0;
  for( int i = 1; i < n-1; i++ ){
    if( a[i-1] < a[i] && a[i] < a[i+1] ) cnt++;
    else if( a[i+1] < a[i] && a[i] < a[i-1] ) cnt++;
  }
  cout << cnt ;
  return 0;
}
