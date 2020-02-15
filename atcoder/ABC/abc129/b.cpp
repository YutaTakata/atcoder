#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
   cin >> n;
   int a[n];
   for( int i = 0; i < n; ++i ){
     cin >> a[i];
   }
   int sum = accumulate(a, a+n, 0);
   int sum_sub = 0;
   int ans = sum;
   for(int i = 0; i < n-1; ++i){
     sum_sub += a[i];
     int abs_dif = abs(sum - 2*sum_sub);
     ans = min(ans, abs_dif);
   }
   cout << ans << endl;
   return 0;
}
