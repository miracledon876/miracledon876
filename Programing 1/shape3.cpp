#include<stdio.h>

main(){
	
	int i,j,h,y;
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++)
			printf("*");
		printf("\n");
	}
	for(h=4;h>1;h--){
		for(y=0;y<h;y++)
			printf("*");
		printf("\n");
	}
}
