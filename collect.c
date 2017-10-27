#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    FILE *fps, *fpc, *fpr;
    double result, cos_, sin_;

    if((fps = fopen("/vagrant/sinresult.txt", "r")) == NULL) {
		printf("Cannot open file.\n");
		exit(1);
    }
    else {
        fscanf(fps, "%lf", &sin_);
    }
    if((fpc = fopen("/vagrant/cosresult.txt", "r")) == NULL) {
		printf("Cannot open file.\n");
		exit(1);
    }
    else {
        fscanf(fpc, "%lf", &cos_);
    }

    result = sin_ + cos_;
    printf("La suma da %lf", result);
    if((fpr = fopen("/vagrant/collectresult.txt", "wb")) == NULL) {
		printf("Cannot open file.\n");
		exit(1);
	}
	fprintf(fpr, "%f", result);
    fclose(fps);
    fclose(fpc);
    fclose(fpr);
    return 0;
}