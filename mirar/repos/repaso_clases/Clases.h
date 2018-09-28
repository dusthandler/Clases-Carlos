#include<iostream>

#ifndef _PRODUCTO_
#define _PRODUCTO_
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

	void quitacantidad(int valor_a_restar) {
		cantidad = cantidad - valor_a_restar;
		if (cantidad <= 0) {
			cantidad = 0;
		}
	}

	void sumarcantidad(int valor_a_sumar) {
		cantidad = cantidad + valor_a_sumar;
	}

};
#endif

#ifndef _COCHE_
#define _COCHE_

class Coche {
private:
	int coordx, coordy, dir, comb, vel, maxx, maxy;

public:
	Coche(int x, int y, int d, int c, int v) {
		coordx = x;
		coordy = y;
		dir = d;
		comb = c;
		vel = v;
	}
	Coche() {
		coordx = 0;
		coordy = 0;
		dir = 0;
		comb = 100;
		vel = 0;
	}

	void acelerar() {
		vel = vel + 1;
	}

	void frenar() {
		vel = vel - 1;
	}

	void avanzar() {
		switch (dir) {
		case 0: //Norte
			if (coordy <= 0) {
				coordy = 0;
			}
			else {
				coordy = coordy - vel;
				comb = comb - (vel / 2);
			}
		case 1: //Este
			if (coordx != maxx) {
				coordx = coordx + vel;
				comb = comb - (vel / 2);
			}
		case 2: //Sur
			if (coordy != maxy) {
				coordy = coordy + vel;
				comb = comb - (vel / 2);
			}
		case 3: //Oeste
			if (coordx <= 0) {
				coordx = 0;
			}
			else {
				coordx = coordx - vel;
				comb = comb - (vel / 2);
			}

		}
	}

	void girar_derecha() {
		if (dir == 3) {
			dir = 0;
		}
		else {
			dir = dir + 1;
		}
	}
	void girar_izquierda() {
		if (dir == 0) {
			dir = 3;
		}
		else {
			dir = dir - 1;
		}
	}
	void girar_coche() {
		vel = 0;
	}
};

#endif // !_COCHE_