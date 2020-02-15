#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  char s[4];
  rep(i, 4) cin >> s[i];
  if(s[0] == s[1] && s[2] == s[3] && s[1] != s[2])
    puts("Yes");
  else if ( s[0] == s[2] && s[1] == s[3] && s[2] != s[1])
    puts("Yes");
  else if( s[0] == s[3] && s[1] == s[2] && s[3] != s[1])
    puts("Yes");
  else 
    puts("No");
  return 0;
}
