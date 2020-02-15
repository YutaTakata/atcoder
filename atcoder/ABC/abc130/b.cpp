#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
  int n, x;
  cin >> n >> x;
  int a[n+1]={};

  for(int i = 1; i <= n; ++i){
    int b;
    cin >> b;
    a[i] = a[i-1] + b;
  }

  int cnt = 0;
  for(int i = 0; i <= n; ++i){
    if( a[i] > x ) break;
    cnt++;
  }
  cout << cnt << endl;
  return 0;
}
