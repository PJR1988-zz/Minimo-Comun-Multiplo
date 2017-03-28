#include <stdio.h>
#include <stdlib.h>

int multiplo(int* p, int j){

	int x, cont=1, i;

	for(x=1; cont; x++){

		cont=0;

		for(i=1;i<j;i++){

			if((x*(*p))%(*(p+i))){

				cont++;

			}

		}

	}

	return (x-1)*(*p);

}
