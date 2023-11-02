#include <stdio.h>
#include <stdlib.h>
float funcion(float *total,float *promedio){
    int i,a=0,semayor=0;
    	for(i=0;i<4;i++){
		if(total[i]>a){a=total[i];semayor=i+1;};
		promedio[i]=total[i]/7;
	}
	return semayor;
}
int main(){
	int i,j;
	float promedio[4]={0},nz[4][7]={0},total[4]={0},semayor,a;
	for(i=0;i<4;i++){
		for(j=0;j<7;j++){
			printf("para semana %d y dia %d ingrese las ventas del dia: ",i+1,j+1); scanf("%f",&nz[i][j]);
			total[i]+=nz[i][j];
		}
	}
    semayor=funcion(total,promedio);
	printf("El total de ventas de cada semana: \n");
	for(i=0;i<4;i++){
		printf("semana %d total de ventas: %.2f \n",i+1,total[i]);
	}
	printf("El promedio de ventas de cada semana: \n");
	for(i=0;i<4;i++){
		printf("semana %d promedio de ventas: %.2f \n",i+1,promedio[i]);
	}
	printf("la semana con mayor venta fue: %.2f",semayor);
}
