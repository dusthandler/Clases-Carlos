#include<iostream>

using namespace std;

class Producto {

private:
	float precio, peso;
	int codigo, cantidad;
public:

	Producto(float price, float weight, int code, int cant) {
		precio = price;
		peso = weight;
		codigo = code;
		cantidad = cant;
	}

	float getPrecio() {
		return precio;
	}

	float getPeso() {
		return peso;
	}

	int getCodigo() {
		return codigo;
	}

	int getCantidad() {
		return cantidad;
	}

	void setPrecio(float c) {
		precio = c;
	}

	void setPeso(float c) {
		peso = c;
	}

	void setCodigo(int c) {
		codigo = c;
	}

	void setCantidad(int c) {
		cantidad = c;
	}

	float sumaIVA() {
		float precioiva = (precio / 100) * 21 + precio;
		return precioiva;
	}

	void quitacantidad(int valor_a_restar){
		cantidad = cantidad - valor_a_restar;
		if (cantidad <= 0) {
			cantidad = 0;
		}	
	}

	void sumarcantidad(int valor_a_sumar) {
		cantidad = cantidad + valor_a_sumar;
	}

};


int main() {
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
	system("pause");
	
}


/*
	Hacer la clase Coche
	Va a tener una coordenada X y una coordenada Y, adem�s de una orientaci�n que va a ser Norte, Oeste, Sur, Este (Pueden ser 0, 1, 2, 3...)
	Va a tener un combustible (un entero) y una velocidad (entero)
	
	Hacer constructor con par�metros
	Hacer constructor vac�o que lo inicie en la posici�n 0, 0, orientaci�n 0, con combustible 100, velocidad 0
	Va a tener los m�todos siguientes:

	acelerar (aumenta en 1 la velocidad)
	frenar (reduce en 1 la velocidad)
	avanzar (cada vez que avanza se desplaza en la direcci�n marcada por la orientaci�n tanto como velocidad tenga en el momento y consume tanto combustible como velocidad tenga entre 2)
	Girar derecha (cambia su orientaci�n un nivel a la derecha)
	Girar izquierda (cambia su orientaci�n un nivel a la izquierda)
	parar (para el coche, deja a velocidad 0)

	getter y setter



*/