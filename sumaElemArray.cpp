/*sumaElemArray*/

#include <iostream>
using namespace std;

int sum(int [], int );

int main(){
	int m, suma;
	cout << "Digite la cantidad de elementos del arreglo: " << endl;
	cin >> m;
	
	int arr[m];

	for (int i = 0; i<m; i++){
		cout << "Elemento "<< i << ": "<< endl;
		cin >> arr[i];
	}
	
	suma = sum(arr, m);
	
	cout << "La suma de elementos del arreglo es: " << suma << endl;
	
	return 0;
}

int sum(int arr[], int m){
	
	if (m == 0){
		return arr[m];
		
	}else{
		return arr[m] + sum(arr, m-1);
	}
}