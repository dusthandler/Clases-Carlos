#include<iostream>
#include<math.h>
#ifndef _VEC_3_
#define _VEC_3_

class vec3 {
public:
	int x, y, z;

	vec3(int coordx) : x(coordx), y(0), z(0) {}
	vec3(int coordx, int coordy) : x(coordx), y(coordy), z(0) {}
	vec3(int coordx, int coordy, int coordz) : x(coordx), y(coordy), z(coordz) {}

	vec3 operator+(vec3 vecsuma) {
		vec3 resultado = vec3(vecsuma.x + x, vecsuma.y + y, vecsuma.z + z);
		return resultado;
	}

	vec3 operator-(vec3 vecresta) {
		vec3 resultado = vec3(vecresta.x - x, vecresta.y - y, vecresta.z - z);
		return resultado;
	}

	const void zero() {
		x = 0;
		y = 0;
		z = 0;
	}

	bool is_zero() {
		return (x == 0 && y == 0 && z == 0);
	}

	int distance_to(vec3 destino) {
		int distance = sqrt(pow(x - destino.x, 2) + pow(y - destino.y, 2) + pow(z - destino.z, 2));
		return distance;
	}

};

#endif // !_VEC_3_
#pragma once
