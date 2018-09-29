#include "Clases.h"

using namespace std;



int main() {

	srand(time(NULL));

	Producto p = Producto(30, 500, 1, 1);
	printf("Precio %.2f Peso %.2f Codigo %d Cantidad %d\n", p.getPrecio(), p.getPeso(), p.getCodigo(), p.getCantidad());
	p.setPeso(100);
	printf("Precio %.2f Peso %.2f Codigo %d Cantidad %d\n", p.getPrecio(), p.getPeso(), p.getCodigo(), p.getCantidad());
	p.setPrecio(50);
	printf("Precio %.2f\n", p.sumaIVA());
	p.setCantidad(300);
	p.quitacantidad(500);
	printf("Cantidad %i\n", p.getCantidad());
	p.setCantidad(800);
	printf("Cantidad %i\n", p.getCantidad());
	
	Coche ford = Coche(0, 0, 0, 100, 0, 20, 20);

	ford.girar_derecha();
	ford.acelerar();
	for (int k = 0; k <= 10; k++) {
		system("cls");
		printf("   ");
		for (int i = 0; i < ford.getMaxx(); i++) {
			printf(" %d", i);
			if (i < 10) { printf(" "); }
		}
		printf("\n");
		for (int i = 0; i < ford.getMaxx(); i++) {
			if (i < 10) { printf(" "); }
			printf("%d ", i);
			for (int j = 0; j < ford.getMaxy(); j++) {
				if (i == ford.getCoordx() && j == ford.getCoordy()) {
					printf("[x]");
				}
				else {
					printf("[ ]");
				}
			}
			printf("\n");
		}
		
		ford.avanzar();
		system("pause");
	}

}

/*
	-Hacer la clase Coche
	-Va a tener una coordenada X y una coordenada Y, además de una orientación que va a ser Norte, Oeste, Sur, Este (Pueden ser 0, 1, 2, 3...)
	-Va a tener un combustible (un entero) y una velocidad (entero)
	-Hacer constructor con parámetros
	-Hacer constructor vacío que lo inicie en la posición 0, 0, orientación 0, con combustible 100, velocidad 0
	-Va a tener los métodos siguientes:
	-acelerar (aumenta en 1 la velocidad)
	-frenar (reduce en 1 la velocidad)
	-avanzar (cada vez que avanza se desplaza en la dirección marcada por la orientación tanto como velocidad tenga en el momento y consume tanto combustible como velocidad tenga entre 2)
	-Girar derecha (cambia su orientación un nivel a la derecha)
	-Girar izquierda (cambia su orientación un nivel a la izquierda)
	-parar (para el coche, deja a velocidad 0)
	-getter y setter
	-Añadir una probabilidad del 3% de que el motor se gripe y se pare en seco si sucede la función devolverá false, si no true
	-Añadir una probabilidad del 5% de que le fallen los frenos y no frene si sucede la función devolverá false, si no true
	-Añadir probabilidad del 10% de derrapar y girar 2 puntos en lugar de 1 si sucede la función devolverá false, si no true

*/

