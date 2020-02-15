#include <bits/stdc++.h>
using namespace std;

int main(){
  int p, q, r;
  cin >> p >> q >> r;
  int minv = min(p+q, p+r);
  minv = min(minv, r+q);
  cout << minv << endl;
  return 0;

}
