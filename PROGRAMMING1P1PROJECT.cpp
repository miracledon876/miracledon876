/*Programmer: Jehmoni Samuels/1804291
Details: Gym billing system to facilitate multiple clients
Date: 10/02/2019-05/03/2019
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main ()
	{
	int ad_class=0, s_class=0, m_class=0, p_cnt=0, d_cnt=0, g_cnt=0, c_cnt=0;
	char gym_idnum[15], name[15], m_type;
	float amount=0, fee=0, ad_cost=0, m_cost=0, s_cost=0, s_total=0, m_total=0;


	printf ("\n============================================\n");
	printf ("\n*********GYM BILLING SYSTEM*****************\n");
	printf ("\n***********GYM-ON-THE-ROCK******************\n");
	system("PAUSE");
	system("CLS");
	printf ("\n*****Enter Gym Identification Number********\n");
	printf ("\n============================================\n");
	fflush (stdin);
	gets (gym_idnum);
	while (strcmp(gym_idnum, "876")!=0)
	{
		printf ("\nEnter full Name:\n");
		fflush (stdin);
		gets (name);

		printf ("\n=======================\n");
		printf ("\nEnter membership type:\n \nPlatnium   \tP:  \nDiamond   \tD:  \nGold        \tG: \n");
		printf ("\n=======================\n");
		scanf ("%c", &m_type);
		fflush (stdin);

		while (m_type!='p' && m_type!='g' && m_type!='d' && m_type!='D' &&m_type!='G' && m_type!='P'){
        system ("pause");
        system ("CLS");
        printf("\n invalid Choice-enter a correct value");
		printf ("\n=======================\n");
		printf ("\nEnter membership type:\n \nPlatnium   \tP:  \nDiamond   \tD:  \nGold        \tG: \n");
		scanf ("%c", &m_type);
		printf ("\n=======================\n");
		fflush (stdin);

		}


		switch (m_type){
			case 'P':
			case 'p':
				system ("CLS");
				p_cnt++;
				printf ("Platnium\n ");
				printf ("\n=======================\n");
				printf ("\nFeatures include:\n-4 free one-hour personal training sessions\n  \n-two guess passes\n");
				printf ("\n-15 percent dicount on regular priced \n sporting goods and health products\n");
				printf ("\n-24 hour access with special swipe card\n");
				break;
			case 'D':
			case 'd':
				system ("CLS");
				d_cnt++;
				printf ("Diamond\n");
				printf ("\n=======================\n");
				printf ("\nFeatures include:\n-2 free one-hour personal training\n");
				printf ("\n-1 guess pass\n  \nPrivate locker\n");
				printf ("\n-10 percent discont on regular priced \nsporting goods and health products\n");
				break;
			case 'G':
			case 'g':
				system ("CLS");
				g_cnt++;
				printf ("Gold\n");
				printf ("\n=======================\n");
				printf ("\nFeatures include:\n-1 fee hour personal training\n ");
				printf ("\n-5 percent dicount on regular priced \nsporting goods and health products\n");
				printf ("\n-Free repiar of exercise gloves on sign-up\n");
				break;
			default:
				system ("CLS");
				printf ("Invalid");
				break;
			}
			system ("pause");
			system ("CLS");
			printf ("\nSpinning and Martial Arts Advance classes are also Available.\n");
			printf ("\n$900 for a Spinning class\n  \n$1100 for a Martial Arts class\n");
			printf ("\n  '1'\tSpinning class only\n  '2'\tMartial Arts class only\n  '3'\tBoth\n  Option: ");
			scanf ("%d", &ad_class);


            while(ad_class!=1 && ad_class!= 2 && ad_class!=3){
            system ("pause");
            system ("CLS");
            printf("\n invalid Choice- Enter a correct value");

			printf ("\nSpinning and Martial Arts Advance classes are also Available.\n");
			printf ("\n$900 for a Spinning class\n  \n$1100 for a Martial Arts class\n");
			printf ("\n  '1'\tSpinning class only\n  '2'\tMartial Arts class only\n  '3'\tBoth\n  Option: ");
			scanf ("%d", &ad_class);



            }
			switch (ad_class){
				case 1:
					printf ("\nEnter the amount of Spinning classes per month: ");
					scanf ("%d", &s_class);
					s_cost=900*s_class;
					s_total+=s_cost;
					break;

				case 2:
					printf ("\nEnter the amount of Martial Arts classes per month: ");
					scanf ("%d", &m_class);
					m_cost=1100*m_class;
					m_total+=m_cost;
					break;
				case 3:
					printf ("\nEnter the amount of Spinning classes per month: ");
					scanf ("%d", &s_class);
					s_cost=900*s_class;
					s_total+=s_cost;
					printf ("\nEnter the amount of Martial Arts classes per month: ");
					scanf ("%d", &m_class);
					m_cost=1100*m_class;
					m_total+=m_cost;
					break;

				default:
					break;
			}
		system ("pause");
		system ("CLS");
		printf("Enter Gym ID number\n");
		fflush (stdin);
		gets (gym_idnum);
		c_cnt+=1;
		}
		printf("Total clients %d",c_cnt);
		printf("\nDiamond Membership Total: $ %d ",d_cnt*7500);
		printf("\nGold Membership Total: $ %d",g_cnt*4000);
		printf("\nPlatnium Membership Total: $ %d",p_cnt*10000);
		printf("\nMartial Arts classes cost: $ %.2f",m_total);
		printf("\nSpinning class cost: $ %.2f",s_total);

	return 0;
	}
