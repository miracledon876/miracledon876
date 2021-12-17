#include<stdio.h>

main(){
	
	int i,j,f=0;
	
	for(i=0;i<3;i++){
		for(j=10;j>f;j--){
			printf("+");
		}
		f+=4;
		printf("\n");
	}
	for(i=0;i<2;i++){
		for(j=0;j<7;j++)
			printf("+");
		printf("\n");
	}
	for(i=1;i<6;i++){
		for(j=0;j<i;j++)
			printf("+");
		printf("\n");
	}
	
	return 0;	
}
