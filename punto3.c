#include <stdio.h>
#include <stdlib.h>
int nash(int j,int nz[2][5], int i){
    int a;
    for(i=0;i<2;i++){
		printf("empleado nro %d \n",i+1);
		for(j=0;j<5;j++){
        	printf("correspondiente al dia %d introduzca la venta: ",j+1);
        	scanf("%d",&nz[i][j]);
				if(nz[i][j]>a){a=nz[i][j];}
			}
	} return a;
}
int main(	) {
	int nz[2][5]={0},i,j,a=0;
	    a=nash(j,nz,i);
	printf("la venta mayor: %d",a);
	return 0;
    
}