#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	char diff = 'A' - 'a';
	printf("%c%c%c\n", s1[0] + diff, s2[0] + diff, s3[0] + diff);

}
