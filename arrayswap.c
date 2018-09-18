#include <stdio.h>
#include <stdlib.h>

int main() {
	int ray[10];
	srand(time(NULL));
	for(int i = 0;i < 10;i++) {
		ray[i]=rand();
	}
	ray[9]=0;
	for(int i = 0;i < 10;i++) {
		printf("Position%d: %d\n", i, ray[i]);
	}
	int ray2[10];
	int * rp = ray;
	int * rp2 = ray2;
	for(int i = 0;i < 10;i++) {
		rp2[9-i]=rp[i];
	}
	for(int i = 0;i < 10;i++) {
		printf("Position%d: %d\n", i, ray2[i]);
	}
}