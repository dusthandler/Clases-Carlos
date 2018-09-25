/*
	Solicitar tres números e indicar el mayor el menor y el intermedio


*/
#include<iostream>

using namespace std;

/*
	
*/

int main(){
	/*
		int lista_numeros[10];
		int n_numeros = 0;
		int n;
	
		cout << "lista_numeros[" << n_numeros << "]: ";
		cin >> n;
		while (n_numeros < 10 && n > 0) {

			lista_numeros[n_numeros] = n;
			n_numeros++;

			cout << "lista_numeros[" << n_numeros << "]: ";
			cin >> n;
		}

		system("cls");
		for (int i = 0; i < n_numeros; i++) {
			cout << "lista_numeros[" << i << "]: " << lista_numeros[i] << endl;
		}


	*/

	//hacer que la X se mueva una posicion a cada lado segun el usuario indique


	int max_y = 10;
	int max_x = 10;
	int n=1;

	int coorx,coory;

	cout << "coorx:";
	cin >> coorx;
	cout << "coory:";
	cin >> coory;


	for (int y = 0; y < max_y; y++) {
		for (int x = 0; x < max_x; x++) {
			if (x == coorx && y == coory) {
				cout << "[x]";
			}
			else {
				cout << "[ ]";
			}
			
		}
		cout << endl;
	}


	system("pause");
}