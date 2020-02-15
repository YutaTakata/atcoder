#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, c, k;
  cin >> n >> c >> k;
  int t[n];
  for(int i = 0; i < n; ++i) cin >> t[i];
  sort(t, t+n);

  int cnt = 1;
  int last_time = t[0] + k;
  int pas = 1;

  for(int i = 1; i < n; ++i){
    if(pas >= c || t[i] > last_time){
      cnt++;
      last_time = t[i] + k;
      pas = 1;
    }
    else pas++;
  }
  cout << cnt << endl;
  return 0;
}
