#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


ll gcd(ll a, ll b){
  ll temp;
  while(a%b !=0){
    temp = b;
    b = a % b;
    a = temp;
  }
  return b;
}



int main(){
  ll a, b;
  ll c, d;
  cin >> a >> b >> c >> d;

  ll e = c*d/gcd(c, d);

  ll num_b = b/c + b/d - b/e;
  ll num_a = (a-1)/c + (a-1)/d - (a-1)/e;
  ll ans = b - num_b - ( a - 1 - num_a );
  cout << ans << endl;
  return 0;
  
}
