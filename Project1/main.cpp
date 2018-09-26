/*
	Solicitar tres números e indicar el mayor el menor y el intermedio


*/
#include<iostream>

#include<time.h>

using namespace std;

/*

*/

int main() {
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


	const int max_y = 10;
	const int max_x = 10;
	int n_obstaculos = 10;
	int n = 1;
	char dir = ' ', preg = 's';
	int coorx = 0, coory = 0;
	int random_x, random_y, rand3, cont = 0;

	int matriz[max_y][max_x];

	srand(time(NULL));

	cout << "Cuantos obstaculos? :";
	cin >> n_obstaculos;

	for (int i = 0; i < n_obstaculos; i++) {
		random_x = rand() % 10;
		random_y = rand() % 10;
		while ((random_x == 0 && random_y == 0) || matriz[random_y][random_x] == 1) {
			random_x = rand() % 10;
			random_y = rand() % 10;
		}
		matriz[random_y][random_x] = 1;
	}



	for (int y = 0; y < max_y; y++) {
		for (int x = 0; x < max_x; x++) {
			if (matriz[y][x] == 1) {
				cout << "[+]";
			}else if (x == coorx && y == coory) {
				cout << "[x]";
			}
			else {
				cout << "[ ]";
			}

		}
		cout << endl;
	}

	while (dir != '0') {
	cout << "up - w" << "\n" << "down - s" << "\n" << "left - a" << "\n" << "right - d" << "\n";
	cin >> dir;
		switch(dir) {
			case 'a':
				if (coorx - 1 >= 0) {
					if (matriz[coory][coorx - 1] != 1) {
						coorx -= 1;
					}
				}
				break;
			case 'w':
				if (coory - 1 >= 0) {
					if (matriz[coory - 1][coorx] != 1) {
						coory -= 1;
					}
				}
				break;
			case 's':
				if (coory + 1 < max_y) {
					if (matriz[coory + 1][coorx] != 1) {
						coory += 1;
					}
				}
				break;
			case 'd':
				if (coorx + 1 < max_x) {
					if (matriz[coory][coorx + 1] != 1) {
						coorx += 1;
					}
				}
				break;
		}

		system("cls");
		for (int y = 0; y < max_y; y++) {
			for (int x = 0; x < max_x; x++) {
				if (matriz[y][x] == 1) {
					cout << "[+]";
				}
				else if (x == coorx && y == coory) {
					cout << "[x]";
				}
				else {
					cout << "[ ]";
				}

			}
			cout << endl;
		}
	}

	system("pause");
}