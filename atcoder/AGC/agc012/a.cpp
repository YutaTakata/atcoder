#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<long long> a(n*3);
  for(int i = 0 ; i < n*3; ++i) cin >> a[i];
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  long long sum = 0;
  for( int i = 0; i < 2*n; ++i ){
    if(i % 2 != 0) sum += a[i];
  }
  cout << sum << endl;
  return 0;
}
