#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int findNumOfDigits(ll x){
  int cnt = 0;
  while(x > 0){
    x /= 10;
    cnt++;
  }
  return cnt;
}

int main(){
  ll n;
  cin >> n;
  int ans = findNumOfDigits(n);
  for(int i = 1; i <= sqrt(n); ++i){
    if(n % i == 0){
      int a_digit = findNumOfDigits(i);
      int b_digit = findNumOfDigits(n / i);
      int maxv = max(a_digit, b_digit);
      ans = min(maxv, ans);
    }
  }
  cout << ans << endl;
  return 0;
}
