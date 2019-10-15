#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;

double distance(double x, double y){
	double dis = 0;
	dis = sqrt( pow(x, 2.0) + pow(y, 2.0) );
	return dis;
}

int main(){
	int n;
	cin >> n;
	double x[110], y[110];
	double ans=0,sum_x = 0, sum_y = 0;
	rep(i, n){
		cin >> x[i] >> y[i];
		double tmpx, tmpy;
		tmpx = sum_x + x[i];
		tmpy = sum_y + y[i];
		double d = distance(tmpx, tmpy);
		if( d >= ans ){
			ans = d;
			sum_y = tmpy;
			sum_x = tmpx;
		}
	}
	cout << fixed;
	cout << setprecision(15);
	cout << ans << endl;
}
