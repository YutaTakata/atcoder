#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    int N; cin >> N;
    vector<string> W(N);
    rep(i, N) cin >> W[i];

    set<string> st;
    st.insert(W[0]);
    for(int i = 1; i < N; ++i){
        if(i % 2 == 0){
            if(st.count(W[i]) == 1 || W[i].front() != W[i-1].back()){
                cout << "LOSE" << endl;
                return 0;
            }
            else{
                st.insert(W[i]);
            }
        }
        else{
            if(st.count(W[i]) == 1 || W[i].front() != W[i-1].back()){
                cout << "WIN" << endl;
                return 0;
            }
            else{
                st.insert(W[i]);
            }
        }
    }
    cout << "DRAW" << endl;
}