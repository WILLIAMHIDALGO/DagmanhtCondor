
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

 
int main()
{
    double num;
    srand(time(NULL));
    num = 1 + rand() % (91 - 1);
    FILE *fp;
    if((fp = fopen("/vagrant/random.txt", "wb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }
    fprintf(fp, "%lf", num);
    fclose(fp);
	 
    return 0;
}