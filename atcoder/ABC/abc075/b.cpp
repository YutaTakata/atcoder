#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main(){
	int h, w;
	cin >> h >> w;
	string s[50];
	rep(i, h) cin >> s[i];
	int dx[8] = {1, 1, 1, 0, 0, -1, -1, -1};
	int dy[8] = {0, 1, -1, 1, -1, -1, 1, 0};

	rep(i, h){
		rep(j, w){
			if(s[i][j] == '#') continue;

			int num = 0;
			rep(d, 8){
				int ni = i + dy[d];
				int nj = j + dx[d];

				if(ni < 0 || h <= ni) continue;
				if(nj < 0 || w <= nj) continue;
				if(s[ni][nj] == '#') num++;
			}
			s[i][j] = char(num + '0');
		}
	}
	rep(i, h) cout << s[i] << endl;
}
