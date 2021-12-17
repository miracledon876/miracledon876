#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main(){
	
	char job[15],c_name[15];
	int c_num=0,age=0;
	float salary=0,b_total=0,g_total=0,o_total=0,l_total=0,p_total=0;
	
	printf("Enter job title\n");
	fflush(stdin);
	gets(job);
	while(strcmp(job,"end")!=0){
		printf("Enter ages\n");
		scanf("%d",&age);
		if (age>=16){
			printf("Enter class numbers\n");
			scanf("%d",&c_num);
			switch(c_num){
				case 1:
					strcpy(c_name,"Blue");
					salary=2000;
					b_total+=salary;
					break;
				case 3:
					strcpy(c_name,"Green");
					salary=2700.38;
					g_total+=salary;
					break;
				case 7:
					strcpy(c_name,"Orange");
					salary=3625.15;
					o_total+=salary;
					break;
				case 9:
					strcpy(c_name,"Lime green");
					salary=4367.15;
					l_total+=salary;
					break;
				default:
					strcpy(c_name,"Purple");
					salary=1000;
					p_total+=salary;
		
			}
			system("CLS");
			printf("Job Title    %s\nAge          %d\nClass Name   %s\nSalary       $ %.2f\n",job,age,c_name,salary);
			system("PAUSE");
		}else
			printf("Age too low\n");
		system("CLS");
		printf("Enter job title\n");
		fflush(stdin);
		gets(job);
	}
	system("CLS");
	printf("Class  Total Salary\n");
	printf("  1       $ %.2f\n  3       $ %.2f\n",b_total,g_total);
	printf("  7       $ %.2f\n  9       $ %.2f\n",o_total,l_total);
	printf("Other     $ %.2f\n",p_total);
	
	return 0;
}
