#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
#define radToDeg(rad) (rad*180/M_PI)
typedef long long ll;


int main(){
    double a, b, x; cin >> a >> b >> x;
    int mark = (int)a*a*b;
    double ans;
    if(x * 2 == mark){
        ans = radToDeg(atan(b/a));
    }
    else if(x*2 > mark){
        ans = radToDeg(atan((mark-x) * (2.0/(a*a*a))));
    }
    else ans = radToDeg(atan((a*b*b) /(2.0 * x)));

    cout << fixed;
    cout << setprecision(10);
    cout << ans << endl;

}