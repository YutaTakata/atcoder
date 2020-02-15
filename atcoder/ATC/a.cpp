#include<bits/stdc++.h>
using namespace std;

int H, W;
vector<vector<char>> maze;
vector<vector<bool>> reached;

void search(int x, int y){
    if(x < 0 || W <= x || y < 0 || H <= y || maze[y][x] == '#') return;
    if(reached[y][x]) return;
    

    reached[y][x] = true;

    search(x+1, y);
    search(x-1, y);
    search(x, y+1);
    search(x, y-1);
}

int main(){
    cin >> H >> W;
    int sx, sy, gx, gy;
    maze.resize(H, vector<char>(W));
    reached.resize(H, vector<bool>(W, false));
    for(int i = 0; i < H; ++i){
        for(int j = 0; j < W; ++j){
            cin >> maze[i][j];
            if(maze[i][j] == 's') sx = j, sy = i;
            if(maze[i][j] == 'g') gx = j, gy = i;
        }
    }
    search(sx, sy);
    if(reached[gy][gx]) cout << "Yes" << endl;
    else cout << "No" << endl;
}