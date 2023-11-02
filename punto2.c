#include <stdio.h>
#include <stdlib.h>
void nash(int j,int nz[20][6],int i){
	
	printf("correspondiente al dia %d introduzca cantidad de kilometros recorridos: ",j+1);
	scanf("%d",&nz[i][j]);
	nz[i][5]+=nz[i][j];
}
int main(	) {
	int nz[20][6]={0},i,j,k=0,dw,a=0;
	for(i=0;i<20;i++){
		for(j=0;j<5;j++){
				nash(j,nz,i);
			}
	}
	printf("la matriz es: \n");
	for(i=0;i<20;i++){
		for(j=0;j<6;j++){
			printf("%d \t",nz[i][j]);
		}
		printf("\n");
	}	
	return 0;
}