#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  double max = 0;
  int sugar = 0;
  int water = 0;

  for(int i = 0; i*100*a < f; ++i){
    for(int j = 0; j*100*b < f; ++j){
      for(int k = 0; k*c< f; ++k){
        for( int l = 0; l*d < f; ++l ){
          if( i == 0 && j == 0 ) continue;
          if(100*a*i + 100*b*j + c*k + d*l > f) continue;
          double density = double(double(k*c + l*d)/double(a*100*i + 100*b*j + c*k + d*l));
          if( max <= density && (k*c+d*l) <= e*(a*i+b*j) ){ max = density;
          sugar = k*c+l*d;
          water = a*100*i+100*b*j;
          }
        }
      }
    }
  }
  cout << water+sugar <<" " << sugar << endl;
  return 0;
}
