#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main(){
	
	char isbn[3],con_code,title[15],s_code,condition[15],source[15];
	float amt=0,fee=0,f_total=0;
	int d_count=0,p_count=0,e_count=0,g_count=0,f_count=0,total=0;
	
	printf("Welcome to the Textbook Inventory System\n");
	system("PAUSE");
	system("CLS");
	printf("Enter the ISBN#\n");
	fflush(stdin);
	gets(isbn);
	while(strcmp(isbn,"xxx")!=0){
		printf("____________________________\n");
		printf("|Source      |  Option   \n|Purchased   |    A     \n|Donated     |    B     \n");
		printf("============================\n");
		scanf("%c",&s_code);
		if(s_code=='A'){
			strcpy(source,"Purchased");
			p_count++;
			printf("============================\n");
			printf("Enter the price\n");
			scanf("%f",&amt);
			fee=amt*0.75;
		}
		if(s_code=='B'){
			strcpy(source,"Donated");
			d_count++;
			amt=0;
		}
		if(amt<=3000){
			printf("============================\n");
			printf("Enter the title of the book\n");
			fflush(stdin);
			gets(title);
			total++;
			printf("============================\n");
			printf("============================\n");
			printf("|Condition   |   Option   \n|Excellent   |     A     \n|Good        |     B     \n|Fair        |     C     \n");
			printf("============================\n");
			fflush(stdin);
			scanf("%c",&con_code);
			switch(con_code){
				case'A':
					strcpy(condition,"Excellent");
					e_count++;
					if(s_code=='B')
						fee=1000;
					break;
				case'B':
					strcpy(condition,"Good");
					g_count++;
					if(s_code=='B')
						fee=800;
					break;
				case'C':
					strcpy(condition,"Fair");
					f_count++;
					if(s_code=='B')
						fee=750;
					break;
				default:
					printf("Invalid\n");
			}
			
			system("CLS");
			printf("________________________________________\nInvoice\n");
			printf("========================================\n");
			printf("|ISBN#                |     %s\n|Title of book        |     %s\n|Condition            |     %s\n|Source of Book       |     %s\n|Purchase Amount      |     $ %.2f\n|Rental Fee           |     $ %.2f\n",isbn,title,condition,source,amt,fee);	
			printf("========================================\n");
			f_total+=fee;
			system("PAUSE");
		}else{	
			system("CLS");
			printf("Price too high\n");
			p_count--;	
			system("PAUSE");
			}
		system("CLS");
		printf("Enter the ISBN#\n");
		fflush(stdin);
		gets(isbn);
	}
	system("CLS");
	printf("_________________________________________\nReport\n");
	printf("=========================================\n");
	printf("|Purchased books      |       %d         \n|Donated books        |       %d         \n",p_count,d_count);
	printf("=========================================\n");
	printf("|Execelent            |       %d         \n|Good                 |       %d         \n|Fair                 |       %d         \n",e_count,g_count,f_count);
	printf("=========================================\n");
	printf("|Total Books          |       %d         \n|Rental Fee Total     |     $ %.2f\n",total,f_total);
	printf("=========================================\n");

	return 0;
}
