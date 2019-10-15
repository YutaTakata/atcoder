#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
	int h, w;
	cin >> h >> w;
	string board[50];
	rep(i, h) cin >> board[i];

	int dx[4] = {1, -1, 0, 0};
	int dy[4] = {0, 0, 1, -1};
	bool flag = false;

	rep(i, h){
		rep(j, w){
			if(board[i][j] == '.') continue;
			else{
				int cnt = 0;
				rep(k, 4){
					int nx = i + dy[k];
					int ny = j + dx[k];

					if(nx < 0 || h <= nx) continue;
					if(ny < 0 || w <= ny) continue;
					if(board[nx][ny] == '.') cnt++;
				}
				if(cnt == 4) flag = true;
			}
		}
	}
	if(flag) cout << "No" << endl;
	else cout << "Yes" << endl;
}
