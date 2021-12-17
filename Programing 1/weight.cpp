#include<stdio.h>

main(){
	int i;
	float weight,high=0;
	
	for(i=0;i<=5;i++){
		printf("Enter a weight\n");
		scanf("%f",&weight);
		if(weight>=high)
			high=weight;
	}
	printf("weight is %.2f lbs",high);
}
