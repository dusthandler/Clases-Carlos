#include "Classes.h"

int main() {

	vec3 punto1 = vec3(1, 1, 1);
	vec3 punto2 = vec3(2, 1, 3);
	float distancia = punto1.distance_to(punto2);
	vec3 resultsuma = punto1 + punto2;

	printf("punto1 > %d : %d : %d\n", punto1.x, punto1.y, punto1.z);
	printf("punto2 > %d : %d : %d\n", punto2.x, punto2.y, punto2.z);
	printf("result > %d : %d : %d\n", resultsuma.x, resultsuma.y, resultsuma.z);

	printf("\n");

	vec3 resultresta = punto1 - punto2;
	printf("punto1 > %d : %d : %d\n", punto1.x, punto1.y, punto1.z);
	printf("punto2 > %d : %d : %d\n", punto2.x, punto2.y, punto2.z);
	printf("result > %d : %d : %d\n", resultresta.x, resultresta.y, resultresta.z);

	system ("pause");
	return 0;
}