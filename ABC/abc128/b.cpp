#include <bits/stdc++.h>
using namespace std;

int main(){
  pair<pair<string, int>, int> p[110];
  int n;
  cin >> n;
  for(int i = 0; i < n; ++i){
    string s;
    int a;
    cin >> s >> a;
    p[i] = make_pair(make_pair(s, -a), i);
  }
  sort(p, p+n);
  for(int i = 0; i < n; ++i){
    cout << p[i].second + 1 << endl;
  }
  return 0;
}


