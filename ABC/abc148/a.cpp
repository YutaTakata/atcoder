#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    set<int> st{1,2,3};
    int a, b; cin >> a >> b;
    st.erase(a);
    st.erase(b);
    auto itr = st.begin();
    cout << *itr << endl;
}