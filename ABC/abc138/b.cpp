#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; ++i) cin >> a[i];

  double sum = 0;
  for(int i = 0; i < n; ++i){
    sum += 1.0 / a[i];
  }
  double ans = 1.0 / sum;

  cout <<fixed;
  cout << setprecision(8);
  cout << ans << endl;
  return 0;
}
