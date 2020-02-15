#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    int N; cin >> N;
    vector<pair<int,int>> student(N);
    rep(i, N){
        int a; cin >> a;
        student[i] = make_pair(a, i+1);
    }

    sort(begin(student), end(student));

    rep(i, N){
        cout << student[i].second;
        if(i < N) cout << " ";
    }
}