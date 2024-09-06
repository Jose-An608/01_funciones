/*2.Suma de primeros numeros*/

#include <iostream>
using namespace std;

int sum(int);

int main(){
	int n, suma;
	
	cout << "Digite hasta que numero quiere sumar: " << endl;
	cin >> n;
	
	suma = sum(n);
	
	cout << "La suma es: " << suma << endl;
	
	return 0;
}

int sum(int x){
	
	if (x == 1){
		return 1;
	}else{
		return x + sum(x-1);
	}
	
}