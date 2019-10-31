#include<bits/stdc++.h>
using namespace std;
using Graph = vector<vector<pair<int, int>>>;

int N, M;
long long L;

auto bfs(const Graph &G, int start, int end){
    vector<int> dist(N, -1);
    queue<int> que;

    dist[start] = 0;
    que.push(start);

    while(!que.empty()){
        int v = que.front();
        que.pop();

        for(auto nv : G[v]){
            if(nv.second > L) continue;
            if(dist[nv.first] != -1) continue;

            dist[nv.first] = dist[v] + 1;
            que.push(nv.first);
        }
    }
    return dist[end];
}

int main(){
    cin >> N >> M >> L;
    Graph G(N);
    for(int i = 0; i < M; ++i){
        int  a, b;
        long long c;
        cin >> a >> b >> c;
        a--, b--;
        G[a].push_back(make_pair(b, c));
        G[b].push_back(make_pair(a, c));
    }

    int Q; cin >> Q;
    for(int i = 0; i < Q; ++i){
        int a, b; cin >> a, b;
        a--, b--;
        cout << bfs(G, a, b) << endl;
    }
}

