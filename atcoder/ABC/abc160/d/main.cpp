#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)

typedef vector<vector<int> > Matrix;

const int INF = 100000000;
Matrix d; // グラフの距離を格納した2次元配列（隣接行列）
          // d[u][v]は辺e=(u,v)のコスト（辺が存在しない場合はINF、ただしd[i][i]=0）

void warshall_floyd(int n) { // nは頂点数
  for (int i = 0; i < n; i++)      // 経由する頂点
    for (int j = 0; j < n; j++)    // 開始頂点
      for (int k = 0; k < n; k++)  // 終端
        d[j][k] = min(d[j][k], d[j][i] + d[i][k]);
}

int main() {
  int N, X, Y; cin >> N >> X >> Y;
  X--, Y--;

  d = Matrix(N, vector<int>(N, INF));
  for (int i = 0; i < N; i++) d[i][i] = 0;
  
  rep(i,N-1){
      d[i][i+1] = 1;
      d[i+1][i] = 1;
  }
  d[X][Y] = 1;
  d[Y][X] = 1;

  warshall_floyd(N);

  vector<int> ans(N, 0);
  
  for (int i = 0; i < N-1; i++) {
    for (int j = i+1; j < N; j++) {
      if (i != j && d[i][j] != INF)
        ans[d[i][j]-1]++;
    }
  }
  
  for(int i = 0; i < N-1; ++i) cout << ans[i] << endl;
}