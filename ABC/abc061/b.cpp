#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  int a[50], b[50];
  int num[51] = {};
  cin >> n >> m;
  for(int i = 0; i < m; ++i ){
    cin >> a[i] >> b[i];
  }
  for(int i = 0; i < m; ++i){
    num[a[i]]++;
    num[b[i]]++;
  }
  for(int i = 1; i <= n; ++i ){
    cout << num[i] << endl;
  }
  return 0;
}
