#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(){
	    vector<vector<int>> A(3,vector<int>(3, 0));
        vector<vector<bool>> bingo(3, vector<bool>(3, false));
        rep(i, 3){
            rep(j, 3){
                cin >> A[i][j];
            }
        }
        
        int N; cin >> N;
        vector<int> B(N, 0);
        rep(i, N){
            cin >> B[i];
        }

        rep(i, N){
            rep(j, 3){
                rep(k, 3){
                    if(B[i] == A[j][k]) bingo[j][k] = true;
                }
            }
        }
        if(bingo[0][0] && bingo[0][1] && bingo[0][2]){
            cout << "Yes" << endl;
            return 0;
        }
        if(bingo[1][0] && bingo[1][1] && bingo[1][2]){
            cout << "Yes" << endl;
            return 0;
        }
        if(bingo[2][0] && bingo[2][1] && bingo[2][2]){
            cout << "Yes" << endl;
            return 0;
        }
        if(bingo[0][0] && bingo[1][0] && bingo[2][0]){
            cout << "Yes" << endl;
            return 0;
        }
        if(bingo[0][1] && bingo[1][1] && bingo[2][1]){
            cout << "Yes" << endl;
            return 0;
        }
        if(bingo[0][2] && bingo[1][2] && bingo[2][2]){
            cout << "Yes" << endl;
            return 0;
        }
        if(bingo[0][0] && bingo[1][1] && bingo[2][2]){
            cout << "Yes" << endl;
            return 0;
        }
        if(bingo[0][2] && bingo[1][1] && bingo[2][0]){
            cout << "Yes" << endl;
            return 0;
        }
        else cout << "No" << endl;
}
