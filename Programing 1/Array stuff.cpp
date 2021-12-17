#include <stdio.h>

main(){
	
	int ARRAY[8]={0},i,total=0;
	
	for (i=0;i<8;i++){
		printf("Enter an age\n");
		scanf("%i",&ARRAY[i]);
		total+=ARRAY[i];
		
	}	
	printf("Total: %i",total);
	printf("\nNumbers divisible by 7:");
	for (i=0;i<8;i++)
		if	(ARRAY[i]%7==0)
			printf("\n%i",ARRAY[i]);
	
	return 0;
}
