#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for( int i = 0; i < (n); ++i )
typedef long long ll;

int main(){
  int n;
  cin >> n;
  int a[210], ans = 0;
  rep(i, n) cin >> a[i];

  while(true) {
    bool exist_odd = false;
    rep(i, n) {
      if( a[i] % 2 != 0 ) exist_odd = true;
    }

    if(exist_odd == true) break;

    rep(i, n) a[i] /= 2;
    ans++;
  }
  cout << ans << endl;
  return 0;
}
