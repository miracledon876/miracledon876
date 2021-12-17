#include <stdio.h>

main(){
	int i,b,j=1;
	
	for(i=1;i<=4;i++){
		for(b=1;b<=i;b++)
			printf("*");
		printf("\n");
	}
	for(i=4;i>=1;i--){
		for(b=i;b>=2;b--)
			printf("*");
		printf("\n");
	}
}
