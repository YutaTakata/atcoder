#include <bits/stdc++.h>
using namespace std;

int main(){
  int k, s;
  cin >> k >> s;
  int cnt = 0;
  for( int i = 0; i <= k; ++i ){
    for( int j = 0; j <= k; ++j ){
      int total = s - i - j;
      if(total <= k && total >= 0) cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
