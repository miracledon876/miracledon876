#include <stdio.h>
#include <string.h>

main(){
	
	float grade,fee=20000,total=0;
	char code,name[15];
	int dcount=0,fcount=0,mcount=0,ecount=0;
	
	printf("Enter a subject name\n");
	fflush(stdin);
	gets(name);
	while(strcmp(name,"END")!=0){
		printf("Enter the code\n");
		scanf("%c",&code);
		printf("Enter the subject grade\n");
		scanf("%f",&grade);
		switch(code){
			case 'D':
				dcount++;
				break;
			case 'F':
				fcount++;
				fee=1000;
				break;
			case 'M':
				mcount++;
				break;
			case 'E':
				ecount++;
				fee=1000;
				break;
			default:
				printf("Invalid\n");
		}
		printf("The fee is $%.2f\n",fee);
		total+=fee;
		printf("Enter a subject name\n");
		fflush(stdin);
		gets(name);
	
	}
	printf("D--> %d\n",dcount);
	printf("F--> %d\n",fcount);
	printf("M--> %d\n",mcount);
	printf("E--> %d\n",ecount);
	
	printf("The total is $%.2f",total);

	return 0;
}
