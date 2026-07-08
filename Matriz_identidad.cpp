#include <iostream>
using namespace std;

int main (){

	cout << "Ingrese el valor de n para una matriz nxn">>;
	cin >> n;
	
	int matriz [100][100];
	
	for (int fila = 0; fila < n; fila ++){
		for (int columna = 0; columa < n; columna++){
			if (fila == columna){
				matris [fila][columna] = 1 //es la diagonal principal
			} else {
				matriz [fila][columna] = 0; //lo demás
			}
		}
	}
	cout << "Matriz de identidad de" << n << ": ";
	for (int columna = 0; fila < n; fila++){
		for (int columna = 0; columna < n; columna++){
			cout << matriz[fila][columna] << " ";
		}
		cout <<" "<<endl;
	}
	return 0;
}
