#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.1416

int main() {
    double result, val, x;
    FILE *fp, *ran;
	if((ran = fopen("/vagrant/random.txt", "r")) == NULL) {
		printf("Cannot open file.\n");
		exit(1);
	}
	else {
		fscanf(ran, "%lf", &x);
	}
	val = PI / 180;
    result = cos(val * x);
	printf("The cos of %lf is %lf degrees\n", x, result);
	if((fp = fopen("/vagrant/cosresult.txt", "wb")) == NULL) {
		printf("Cannot open file.\n");
		exit(1);
	}
	fprintf(fp, "%f", result);
	fclose(fp);
    return 0;
}