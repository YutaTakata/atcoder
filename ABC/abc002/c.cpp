#include<bits/stdc++.h>
using namespace std;

int main(){
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    x2 -= x1, x3 -= x1;
    y2 -= y1, y3 -= y1;
    double ans = abs(x2 * y3 - x3 * y2)/2.0;
    cout << fixed;
    cout << setprecision(4);
    cout << ans << endl;
}