#include <bits/stdc++.h>
using namespace std;

int main(){
  int L, R;
  cin >> L >> R;
  int cnt = 0;
  for(int i = L; i < R; ++i){
    for(int j = i; j < R; ++j){
      if(j%i == i^j) cnt++;
    }
  }

}
