#include <bits/stdc++.h>
using namespace std;

int findSumOfDigits(int n){
  int sum = 0;
  while(n > 0){
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main(){
  int n;
  cin >> n;
  int ans = 1000000;
  for(int i = 1; i < n; ++i){
    int total = findSumOfDigits(i) + findSumOfDigits(n - i);
    ans = min(ans, total);
  }
  cout << ans << endl;
  return 0;
}
