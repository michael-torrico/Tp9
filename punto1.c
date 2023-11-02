#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int funcion(int nz[4][4]){
    int i,j,k=0;
        for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			nz[i][j]=rand()%10;
			if(nz[i][j]==0){
				k++;
			}
		}
	} return k;
}
int main(	) {
	int nz[4][4],i,j,k;
	srand(time(NULL));
    k=funcion(nz);
	printf(" cantidad de 0s: %d \n la matriz es: \n",k);
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d \t",nz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}