#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int cnt = 0;
  if( s[0] == 'o' ) cnt++;
  if( s[1] == 'o' ) cnt++;
  if( s[2] == 'o' ) cnt++;
  int ans = 700 + cnt * 100 ;
  cout << ans << endl;
  return 0;
}
