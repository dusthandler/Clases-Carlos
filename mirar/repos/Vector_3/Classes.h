#include<iostream>
#include<math.h>
#ifndef _VEC_3_
#define _VEC_3_

class vec3 {
public:
	int x, y, z;
	const int max_x = 50;
	const int max_y = 50;
	const int max_z = 100;

	vec3(const int coordx) : x(coordx), y(0), z(0) {}
	vec3(const int coordx, const int coordy) : x(coordx), y(coordy), z(0) {}
	vec3(const int coordx, const int coordy, const int coordz) : x(coordx), y(coordy), z(coordz) {}

	vec3 operator+(const vec3 vecsuma) {
		vec3 resultado = vec3(vecsuma.x + x, vecsuma.y + y, vecsuma.z + z);
		return resultado;
	}

	vec3 operator-(const vec3 vecresta) {
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

	int distance_to(const vec3 destino) {
		int distance = sqrt(pow(x - destino.x, 2) + pow(y - destino.y, 2) + pow(z - destino.z, 2));
		return distance;
	}

};

#endif // !_VEC_3_
#pragma once
