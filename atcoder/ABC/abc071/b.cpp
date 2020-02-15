#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  sort(s.begin(), s.end());

  bool backet[100100] = {false};

  for(int i = 0; i < s.size(); i++){
    backet[s[i]] = true;
  }

  for( char c = 'a'; c <= 'z'; c++ ){
    if(!backet[c]){
      cout << c << endl;
      return 0;
    }
  }
  cout << "None" << endl;
}
