#include <bits/stdc++.h>
using namespace std;

long long factorial(int a){
    long long ans = 1;
    for(int i = 1; i < a; i++){
      ans *= i;
    }
    return ans;
  }

  long long combination(int a, int b){
    long long ans = factorial(a)/(factorial(b)*factorial(a-b));
    return ans;
  }


int main(){
  int k, n;
  cin >> n >> k ;

  
  for( int i = 0; i < k; i++ ){
    long long ans = combination(n-k+1, i) * combination(k-1, i-1) % (pow(10,9) + 7);
    cout << ans << endl;
  }

  return 0;
}
