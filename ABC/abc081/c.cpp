#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k;
  cin >> n >> k;
  vector<int> a(n), bucket(n);
  for( int i = 0; i < n; ++i ) {
    cin >> a[i];
    bucket[a[i]]++;
  }
  sort(bucket.begin(), bucket.end(), greater<int>());
  
  int cnt = 0, sum = 0, ans = 0;
  sum = bucket.size();
  if( sum < k ) cout << 0 << endl;
  else{
    for(int i = 0; i < k; ++i){
      cnt += bucket[i];
    }
    ans = sum - cnt;
    cout << ans << endl;
  }
  return 0;
}
