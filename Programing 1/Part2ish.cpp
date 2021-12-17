#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main(){
	
	char con_code,title[15],s_code,condition[15][10],source[15],pwrd[15],choice;
	float amt[10]={0},total=0,f_total=0;
	int isbn[10]={0},i=0,g,j=0,h,isbnt,found;
	int m_option=0,search,attempts=0,correct=0;
	
	do{
		printf("========================================\n");
		printf("Welcome to the Textbook Inventory System\n");
		printf("========================================\n");
		printf("Enter the password\n");
		fflush(stdin);
		gets(pwrd);
		if(strcmp(pwrd,"123")==0)
			correct=1;
		else{
			printf("Password Incorrect\n");
			system("PAUSE");
			system("CLS");
			attempts++;	
		}
	}while( attempts<3 && correct!=1);
	
	if(correct==1){
		for(g=0;g<10;g++){
			isbn[g]=-1;
		}
		system("CLS");
		printf("========================================\n");
		printf("Welcome to the Textbook Inventory System\n");
		printf("========================================\n");
		printf("1 Add a Book\n2 Update a Book\n3 Display totals\n0 Exit\n");
		scanf("%d",&m_option);
		system("CLS");
		while(m_option!=0){
			switch(m_option){
				case 1:
					search=0;
					system("CLS");
					while(i<10 && search!=1){
						if(isbn[i]==-1){
							search=1;
							printf("Enter the ISBN#\n");
							scanf("%d",&isbn[i]);
							printf("============================\n");
							printf("Enter the price\n");
							scanf("%f",&amt[i]);
							if(amt[i]<=3000){
								printf("============================\n");
								printf("|Condition   |   Option   \n|Excellent   |     A     \n|Good        |     B     \n|Fair        |     C     \n");
								printf("============================\n");
								fflush(stdin);
								scanf("%c",&con_code);
								switch(con_code){
									case'A':
										strcpy(condition[i],"Excellent");
										break;
									case'B':
										strcpy(condition[i],"Good");
										break;
									case'C':
										strcpy(condition[i],"Fair");
										break;
									default:
										printf("Invalid\n");
								}
							}else{	
								system("CLS");
								printf("Price too high\n");
								isbn[i]=-1;
								amt[i]=0;	
								system("PAUSE");
							}
						}else
							i++;
					}
					break;
				case 2:
					system("CLS");
					isbnt=0;
					j=0;
					found=0;
						printf("Enter the isbn\n");
					scanf("%d",&isbnt);
					while(j<10 && found!=1){
						if(isbnt==isbn[j])
							found=1;
						else
							j++;
					}
					if(found==1){
						system("CLS");
						printf("===================================================================\n");
						printf("|ISBN#                |Condition            |Purchase Amount      |\n");	
						printf("===================================================================\n");
						printf("%d                     %s                     %.2f",isbn[j],condition[j],amt[j]);
						printf("\n===================================================================\n");
						printf("Price Change\ny/n\n");
						fflush(stdin);
						scanf("%c",&choice);
						if(choice=='y'){
							printf("Enter the price\n");
							scanf("%f",&amt[j]);
						}
						if(amt[j]<=3000){
							printf("Condition Change\ny/n\n");
							fflush(stdin);
							scanf("%c",&choice);
							if(choice=='y'){
								printf("============================\n");
								printf("|Condition   |   Option   \n|Excellent   |     A     \n|Good        |     B     \n|Fair        |     C     \n");
								printf("============================\n");
								fflush(stdin);
								scanf("%c",&con_code);
							}
							switch(con_code){
								case'A':
									strcpy(condition[j],"Excellent");
									break;
									case'B':
									strcpy(condition[j],"Good");
									break;
								case'C':
									strcpy(condition[j],"Fair");
									break;
								default:
									printf("Invalid\n");
							}
						}else{
							system("CLS");
							printf("Price too high\n");	
							system("PAUSE");
						}
					}else{
						system("CLS");
						printf("ISBN# not found\n");
						system("PAUSE");
					}
					break;
				case 3:
					system("CLS");
					h=0;
					printf("=========================================================================================\n");
					printf("|ISBN#                |Condition            |Purchase Amount      |Rental Fee           |\n");	
					printf("=========================================================================================\n");
					while(h<10 && isbn[h]!=-1){
						printf("%d                     %s",isbn[h],condition[h]);
						total+=amt[h];
						if(strcmp(condition[h],"Excellent")==0){
							printf("                $ %4.2f               $ %.2f         \n",amt[h],0.2*amt[h]);
							f_total+=0.2*amt[h];
						}else if(strcmp(condition[h],"Good")==0){
							printf("                     $ %4.2f               $ %.2f         \n",amt[h],0.15*amt[h]);
							f_total+=0.2*amt[h];
						}else if(strcmp(condition[h],"Fair")==0){
							printf("                     $ %4.2f               $ %.2f         \n",amt[h],0.08*amt[h]);
							f_total+=0.2*amt[h];
						}
						h++;
						
					
					}
					printf("=========================================================================================\n");
					printf("Total Purchase Amount     : %.2f\n",total);
					printf("Total Expected Rental Fees: %.2f\n",f_total);
					system("PAUSE");
					break;
			}
		system("CLS");
		printf("========================================\n");
		printf("Welcome to the Textbook Inventory System\n");
		printf("========================================\n");
		printf("1 Add a Book\n2 Update a Book\n3 Display totals\n0 Exit\n");
		scanf("%d",&m_option);	
		}
	}else
		printf("Attempts Exceeded");
	return 0;
}
