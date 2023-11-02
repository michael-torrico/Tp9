#include <stdio.h>
#include <stdlib.h>
void func(int a, int nz[2][a],int j){
    			printf("ingrese num: ");
			scanf("%d",&nz[0][j]);
			nz[1][j+1]=nz[0][j];
			if(j==a-1){
				nz[1][0]=nz[0][a-1];
			}
}
int main(){
	int a;
	printf("ingrese la long del vec: ");
	scanf("%d",&a);
	int nz[2][a],i,j;
		for(j=0;j<a;j++){
        func(a,nz,j);
	}
	printf("\n");
	for(i=0;i<2;i++){
		for(j=0;j<a;j++){
			printf("%d \t",nz[i][j]);
		}
		printf("\n");
	}	
}