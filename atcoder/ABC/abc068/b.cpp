#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  if( n == 1 ) cout << 1 << endl;
  else if( 2 <= n && n < 4 ) cout << 2 << endl;
  else if ( 4 <= n && n < 8 ) cout << 4 << endl;
  else if ( n >= 8 && n < 16 ) cout << 8 << endl;
  else if ( n >= 16 && n < 32 ) cout << 16 << endl;
  else if ( n >= 32 && n < 64  ) cout << 32 << endl;
  else if ( n >= 64 ) cout << 64 << endl;
  return 0;
}
