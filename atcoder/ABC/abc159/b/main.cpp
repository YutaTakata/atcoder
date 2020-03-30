#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(){
	    string S; cin >> S;
        int N = S.size();
        string first, second;
        first = S.substr(0, (N-1) /2);
        second = S.substr((N+1)/2, N-1 / 2);

        if(first == second){
            int n = first.size();
            if(n % 2 == 0){
                for(int i = 0; i <= (n - 1) / 2; ++i){
                    if(first[i] != first[n - 1 - i]){
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
            else{
                for(int i = 0; i <= (n - 3) / 2; ++i){
                    if(first[i] != first[n - 1 - i]){
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
        }
        else{
            cout << "No" << endl;
            return 0;
        }
        cout << "Yes" << endl;
}
