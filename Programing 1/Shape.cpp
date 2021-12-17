#include <stdio.h>

main(){
	
	int i,b;
	
	for(i=7;i>3;i--){
		for(b=i;b>0;b--)
			printf("*");
		printf("\n");
	}
}
