#include <stdio.h>
#include <stdlib.h>

main(){
	
	int id[50],i,b_count=0,t_count=0;
	char status[50];
	float tuition[50],total=0;

	printf("Enter a id number");
	scanf("%d",&id[i]);
	while(id[i]!=0){
		printf("B Boarding Students\nT Traveling Students\n");
		fflush(stdin);
		scanf("%c",&status[i]);
		switch(status[i]){
			case 'B':
				b_count++;
				break;
			case 'T':
				t_count++;
				break;
			default:
				printf("invalid");
		}
		printf("Enter the tuition\n");
		scanf("%f",&tuition[i]);
		total+=tuition[i];
		i++;
		printf("Enter a id number\n");
		scanf("%d",&id[i]);
	}
	printf("Student count %d\nBoarding students %d\nTraveling students %d\nTotal tutiton %.2f",i,b_count,t_count,total);
	return 0;
}
