#include <stdio.h>
main(){
	
	int c=0,age;
	float grade;
	printf("Enter age");
	scanf("%d",&age);
	while(age!=-9){
		printf("\nEnter grade");
		scanf("%d",&grade);
		c++;
		printf("Enter age");
		scanf("%d",&age);
	}
	printf("\n%d",c);
	return 0;
}
