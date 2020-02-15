#include <bits/stdc++.h>
using namespace std;

int main(){
  int w, h, n;
  cin >> w >> h >> n;

  int x, y, a;
  int s[105][105] = {};

  for( int i = 0; i < n; ++i ) {
    cin >> x >> y >> a;
    if(a == 1) {
      for(int i = 0; i <= x; ++i){
        for(int j = 0; j <= h; ++j){
          s[i][j] = 1;
        }
      }
    }

    else if( a == 2 ){
      for( int i = x + 1; i <= w; ++i  ){
        for( int j = 0; j <= h; ++j ){
          s[i][j] = 1;
        }
      }
    }

    else if( a == 3 ){
      for( int i = 0; i <= w; ++i ){
        for( int j = 0; j <= y; ++j ){
          s[i][j] = 1;
        }
      }
    }

    else if( a == 4 ){
      for( int i = 0; i <= w; ++i ){
        for(int j = y + 1; j <= h; ++j){
          s[i][j] = 1;
        }
      }
    }
  }

  int ans = 0;

  for(int i = 1; i <= w; ++i){
    for( int  j = 1; j <= h; ++j){
      if(!s[i][j]) ans++;
    }
  }
  cout << ans << endl;
  return 0;


}
