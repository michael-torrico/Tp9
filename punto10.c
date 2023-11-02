#include <stdio.h>
#include <stdlib.h>
void funcion(int *v1,int *v2){
    int i;
    	printf("filas: \n");
	for(i=0;i<10;i++){
		printf("%d    \t",v1[i]);
	}
	printf("\n columnas: \n");
	for(i=0;i<10;i++){
		printf("%d    \t",v2[i]);
	}
}
int main( ){
	int nz[10][10],i,j,v1[10]={0},v2[10]={0};
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("ingrese un num: ");
			scanf("%d",&nz[i][j]);
			v1[i]=v1[i]+nz[i][j];
			v2[j]=v2[j]+nz[i][j];
		}
	}
    funcion(v1,v2);

	return 0;
}