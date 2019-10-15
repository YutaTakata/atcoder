#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i= 0; i < n; ++i) cin >> a[i];

  int flag = 0, ans = 0;
  int i = 1;
  while(i < n){
    if(a[i] == a[i-1])i++;
    else if(a[i-1] < a[i]){
      if(flag == 0) {flag = 1; i++;}
      else if (flag == 1) i++;
      else{ans++; i++; flag =0;}
    }
    else if (a[i-1] > a[i]){
      if(flag == 0){flag = -1; i++;}
      else if (flag == -1){ i++;}
      else {ans++; i++; flag = 0;}
    }
  }
  cout << ans+1 << endl;
  return 0;
}
