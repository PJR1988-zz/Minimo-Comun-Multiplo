#include <stdio.h>
#include <stdio.h>
#include </opt/mcm/numeretes.h>
#include </opt/mcm/mcm.h>

void ejecucion(){

	int j=1, mcm, i;
	int* p;

	printf("\n\nIntroduzca cuantos numeros tiene el grupo del que quiere calcular el minimo comun multiplo, para salir pulse cero: ");
	scanf("%d", &j);

	while(j){

		p=(int*)malloc(j*sizeof(int));

		numeretes(p,j);

		mcm=multiplo(p,j);

		printf("\nEl mcm de los numeros: %d", *p);

		for(i=1;i<j-1;i++){ printf(", %d", *(p+i));}

		printf(" y %d es %d", *(p+(j-1)), mcm);

		printf("\n\nIntroduzca cuantos numeros tiene el grupo del que quiere calcular el minimos comun multiplo, para salir pulse cero: ");
		scanf("%d", &j);

	}

}
