#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;

bool prime(int num){
    if(num < 2) return false;
    else if(num == 2) return true;
    else if( num % 2 == 0) return false;

    double sqrtnum = sqrt(num);
    for(int i = 3; i <= sqrtnum; i += 2){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int checkPrime(int num){
    bool flag = false;
    while(flag == false){
        if(prime(num)){
            flag = true;
        }
        else{
            num +=2;
        }
    }
    return num;
}

int main(){
    int X; cin >> X;
    if(X % 2 == 0){
        if(X == 2){
            cout << 2 << endl;
        }
        else{
            cout << checkPrime(X+1) << endl;
        }
    }
    else{
        cout << checkPrime(X) << endl;
    }
}