#include<iostream>
#include<math.h>

using namespace std;

class vec3 {
private:
	int x, y, z;
public:
	vec3(int coordx) {
		x = coordx;
		y = 0;
		z = 0;
	}
	vec3(int coordx, int coordy) {
		x = coordx;
		y = coordy;
		z = 0;
	}
	vec3(int coordx, int coordy, int coordz) {
		x = coordx;
		y = coordy;
		z = coordz;
	 }

	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	int getZ() {
		return z;
	}

	void setX(int v) {
		x = v;
	}
	void setY(int v) {
		y = v;
	}
	void setZ(int v) {
		z = v;
	}

	vec3 operator+(vec3 v) {
		vec3 resultado = vec3(v.getX()+x, v.getY()+y, v.getZ()+z);
		return resultado;
	}

	vec3 operator-(vec3 v) {
		vec3 resultado = vec3(v.getX() - x, v.getY() - y, v.getZ() - z);
		return resultado;
	}

	void zero() {
		x = 0;
		y = 0;
		z = 0;
	}

	bool is_zero() {
		return (x == 0 && y == 0 && z == 0);
	}

	int distance_to(vec3 destino) {
		int distance = sqrt(pow(x - destino.getX(), 2)  + pow(y - destino.getY(), 2) + pow(z - destino.getZ(), 2));
		return distance;
	}

};

int main() {

	vec3 punto1 = vec3(0, 0, 0);
	vec3 punto2 = vec3(2, 1, 3);
	float distancia = punto1.distance_to(punto2);
	vec3 resultsuma = punto1 + punto2;

	printf("punto1 > %d : %d : %d\n", punto1.getX(), punto1.getY(), punto1.getZ());
	printf("punto2 > %d : %d : %d\n", punto2.getX(), punto2.getY(), punto2.getZ());
	printf("result > %d : %d : %d\n", resultsuma.getX(), resultsuma.getY(), resultsuma.getZ());

	printf("\n");

	vec3 resultresta = punto1 - punto2;
	printf("punto1 > %d : %d : %d\n", punto1.getX(), punto1.getY(), punto1.getZ());
	printf("punto2 > %d : %d : %d\n", punto2.getX(), punto2.getY(), punto2.getZ());
	printf("result > %d : %d : %d\n", resultresta.getX(), resultresta.getY(), resultresta.getZ());

	system ("pause");
	return 0;
}