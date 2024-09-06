/*multiplica*/

#include <iostream>
using namespace std;

int multi(int, int);

int main(){
	int m, n;
	cout << "Digite el multiplicando: " << endl;
	cin >> m;
	
	cout << "Digite el multiplicador: " << endl;
	cin >> n;
	
	m = multi(m,n);
	
	cout << "La multiplicacion es: " << m << endl;
	
}

int multi(int x, int y){
	
	if (y == 1){
		return x;
	}else{
		return x + multi(x, y-1);
	}
}