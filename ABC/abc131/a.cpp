#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;

  bool can = true;

  if(s[0] == s[1]) can = false;
  else if (s[1] == s[2]) can = false;
  else if (s[2] == s[3]) can = false;

  if(can) cout << "Good" << endl;
  else cout << "Bad" << endl;

  return 0;
}
