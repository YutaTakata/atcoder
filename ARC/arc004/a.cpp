#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  double maxv = 0;
  int x[100], y[100];
  cin >> n;
  for( int i = 0; i < n; ++i ) cin >> x[i] >> y[i] ;
  for(int i = 0; i < n - 1; ++i) {
    for( int j = i+1; j < n; ++j ){
      double des = sqrt( pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2) );
      maxv = max(des, maxv);
    }
  }
  cout << fixed;
  cout << setprecision(7);
  cout << maxv << endl;
  return 0;
}
