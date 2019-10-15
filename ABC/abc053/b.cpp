#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int index_start = 20000000, index_end = 0;
  for(int i = 0; i < s.size(); i++){
    if( s[i] == 'A' && index_start > i ) index_start = i;
    else if ( s[i] == 'Z' && index_end < i ) index_end = i;
  }
  int ans = index_end - index_start + 1;
  cout << ans << endl;
  return 0;
}
