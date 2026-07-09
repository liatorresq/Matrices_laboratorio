#include <iostream>
using namespace std;
int main(){
	int m, n;
	
	do {
		cout << "Ingrese el numero de filas (m): ";
		cin >> m;
	} while(m < 1 || m > 20);

	do{
		cout << "Ingrese el numero de columnas (n): ";
		cin >> n;
	} while(n < 1 || n > 20);

	int matriz[20][20];

	cout << "---INGRESO DE DATOS---"<< endl;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout <<"Ingrese datos para[" << i << " ][" << j << "]: ";
			cin >> matriz[i][j];
		}
	}

	cout << "---MATRIZ ORIGINAL---" << endl;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "---MATRIZ TRANSPUESTA---" << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << matriz[j][i] << "\t";
		}
		cout << endl;
	}
	return 0;
}
