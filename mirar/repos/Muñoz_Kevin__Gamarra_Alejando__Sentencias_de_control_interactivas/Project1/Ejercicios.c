//Kevin Manel Muñoz Oliver - Alejandro Aurelio Gamarra Niño

//ejercicio 1
/*
#include <stdio.h>
int main() {
	int p = 0, i = 0, n;
	do {
		printf("Dame un numero\nintroduce 0 para finalizar\n");
		scanf_s("%i", &n);
		system("cls");
		if (n % 2 == 0) {
			p++;
		}
		else {
			i++;
		}
	} while (n != 0);
	printf("Has introducide %i pares y %i impares\n", p, i);
	system("pause");
	return 0;
}
*/

// ejercicio 2
/*
#include <stdio.h>
int main() {
	int n = 1, x = 1;

	while (n != 0)
	{
		printf("Dame el numero hasta donde quieres buscar\nintroduce 0 para finalizar\n");
		scanf_s("%i", &n);
		system("cls");
		if (n != 0) {

			printf("Los numeros son:\n");
			do {

				if (x % 3 == 0) {
					printf("%i\n", x);
				}
				x++;
			} while (x <= n);
			x = 0;
		}
		else {
			printf("fin del programa\n");
		}
	}
	system("pause");
	return 0;
}
*/

// ejercicio 3
/*
#include <stdio.h>
int main() {
	int f, c, n;
	printf("Cuantas estrellas quieres en la ultima fila:\n");
	scanf_s("%i", &n);
	for (c = 1; c <= n; c++) {
		for (f = 1; f <= c; f++) {
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
*/

// ejercicio 4
/*
#include <stdio.h>
int main() {
	int x, z = 0, n, c, max, min;
	printf("Cuantos numeros quieres sumar?:\n");
	scanf_s("%i", &n);

	for (c = 1; c <= n; c++)
	{
		printf("Dame un numero:\n");
		scanf_s("%i", &x);
		z = z + x;
		if (c == 1) {
			max = x;
			min = x;
		}
		if (x > max)
		{
			max = x;
		}
		if (x < min) {
			min = x;
		}
	}
	printf("La suma de los numeros es %i\n", z);
	printf("El numero mas grande es %i y el mas pequeño es %i\n", max, min);
	system("pause");
	return 0;
}
*/

// ejercicio 5
/*
#include <stdio.h>
int main() {
	int x = 1, z = 0, c = 1, max, min;
	while (x != 0) {
		printf("Dame un numero: \n");
		scanf_s("%i", &x);
		z = z + x;
		if (c == 1) {
			max = x;
			min = x;
		}
		if (x > max) {
			max = x;
		}
		if (x < min && x != 0) {
			min = x;
		}
		c++;
	}
	printf("La suma de los numeros es %i\n", z);
	printf("El numero mas grande es %i y el mas pequeno es %i\n", max, min);
	system("pause");
	return 0;
}
*/

// ejercicio 6
/*
#include <stdio.h>
int main() {
	int n;
	do {
		printf("Dame un numero del 0 al 9\n");
		scanf_s("%i", &n);
		if (n <0  || n>9) {
			printf("Ese numero no entra en el rango\n");
		}
	} while (n <0 || n >9);
	printf("Felicidades has ganado!!!!\n");
	system("pause");
	return 0;
}
*/

//ejercicio 7
/*
#include <stdio.h>
int main()
{
	int f, c, n;
	printf("Cuantas filas quieres? :\n");
	scanf_s("%i", &n);


	for (f = 1; f <= n; f++)
	{
		for (c = n; c >= f; c--)
		{
			if (f != 1 && c<n && c>f) {
				printf("o");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}


	for (f = 1; f <= n; f++)
	{
		for (c = n; c >= 1; c--)
		{
			if (c > n - f + 1) {
				printf(" ");
			}
			else if ((f == 1 && (c == 1 || c == n)) || (f == n && c == 1))
			{
				printf("o");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}


	for (f = 1; f <= n; f++)
	{
		for (c = n * 2 - 1; c >= 1; c--)
		{
			if (c > n - f && c < n + f)
			{
				if ((c % 2 == 0 && f % 2 == 0) || (c % 2 != 0 && f % 2 != 0))
				{
					printf("o");
				}
				else {
					printf("*");
				}
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
*/