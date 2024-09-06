/*1.Factorial*/

#include <iostream>
using namespace std;

int fact(int);

int main(){
	int n, f;
	
	cout << "Digite un numero: " << endl;
	cin >> n;
	
	f = fact(n);
	
	cout << "El factorial es: " << f << endl;
	
	return 0;
}

int fact(x){
	
	if (x == 0){
		return 1;
	}else{
		return x * fact(x-1);
	}
}