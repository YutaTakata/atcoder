#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  map<string, int> cards{};

  cin >> n;
  string s;
  for( int i = 0; i < n; ++i ){
    cin >> s;
    cards[s]++;
  }
  
  cin >> m;
  for(int i = 0; i < m; ++i){
    cin >> s;
    cards[s]--;
  }

  int maxv = 0;
  for( auto x : cards ){
    maxv = max(maxv, x.second);
  }

  cout << maxv << endl;
  return 0;
}
