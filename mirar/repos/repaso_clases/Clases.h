#include<iostream>
#include <time.h>

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
	Coche(int x, int y, int d, int c, int v, int mm, int my) {
		coordx = x;
		coordy = y;
		dir = d;
		comb = c;
		vel = v;
		maxx = mm;
		maxy = my;
	}
	Coche() {
		coordx = 0;
		coordy = 0;
		dir = 0;
		comb = 100;
		vel = 0;
		maxx = 10;
		maxy = 10;
	}

	bool gripar() {
			int grip = rand() % 100 + 1;
			return(grip >= 1 && grip <= 3);
		}

	void acelerar() {
		if (gripar() == true) {
			parar_coche();
		}
		
		else {
			vel = vel + 1;
		}
	}

	bool fallo_frenos() {
		int fallo = rand() % 100 + 1;
		return(fallo >= 1 && fallo <= 5);
	}

	void frenar() {
		if (fallo_frenos() == false) {
			vel = vel - 1;
		}
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
			if (coordx <= maxx) {
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

	bool derrapar() {
		int derrape = rand() % 100 + 1;
		return (derrape >= 1 && derrape <= 10);
	}

	void girar_derecha() {

		if (derrapar == false) {
			if (dir == 3) {
				dir = 0;
			}
			else {
				dir = dir + 1;
			}
		}
		else {
			if (dir == 3) {
				dir = 1;
			}
			else if (dir == 2) {
				dir = 0;
			}
			else {
				dir = dir + 2;
			}
		}
	}
	void girar_izquierda() {

		if (derrapar == false) {
			if (dir == 0) {
				dir = 3;
			}
			else {
				dir = dir - 1;
			}
		}
		else {
			if (dir == 0) {
				dir = 2;
			}
			else if (dir == 1) {
				dir = 3;
			}
			else {
				dir = dir - 2;
			}
		}
	}
	void parar_coche() {
		vel = 0;
	}

	int getCoordx() {
		return coordx;
	} 

	int getCoordy() {
		return coordy;
	}

	int getDir() {
		return dir;
	}

	int getComb() {
		return comb;
	}

	int getVel() {
		return vel;
	}

	int getMaxx() {
		return maxx;
	}

	int getMaxy() {
		return maxy;
	}

	void setCoordx(int c) {
		coordx = c;
	}

	void setCoordy(int c) {
		coordy = c;
	}

	void setDir(int c) {
		dir = c;
	}

	void setComb(int c) {
		comb = c;
	}

	void setVel(int c) {
		vel = c;
	}

	void setMaxx(int c) {
		maxx = c;
	}

	void setMaxy(int c) {
		maxy = c;
	}

	


};

#endif // !_COCHE_