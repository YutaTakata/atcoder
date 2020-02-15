#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	if((a+b)%2 == 0 ){
		int k = (a + b) / 2;
		cout << k <<endl;
	}else{
		cout << "IMPOSSIBLE" << endl;
	}
	return 0;
}
