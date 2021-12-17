#include<stdio.h>

main(){
	
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=(i-1);j<6;j++){
			printf("+");
		}
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
