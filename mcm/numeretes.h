#include <stdio.h>
#include <stdlib.h>

void numeretes(int *p,int j){

	int i=0;

	printf("\ndame el 1º numero: ");
	scanf("%d", p);

	for(i=1;i<j;i++){

		printf("\ndame el %dº numero: ", (i+1));
		scanf("%d", (p+i));

	}

	for(i=j; i>0; i--){ if(*(p-i)<*(p-i-1)){ *(p-i-1)=*(p-i-1)+*(p-i);*(p-i)=*(p-i-1)-*(p-i);*(p-i-1)=*(p-i-1)-*(p-i);}}

}
