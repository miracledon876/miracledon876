#include <stdio.h>
#include <stdlib.h>

main(){
	
	int m_option,option;
	printf("1 Purchases\n2 Sales\n3 Reports\n4 More\n0 Exit\n");
	scanf("%d",&m_option);
	while(m_option!=0){
		switch(m_option){
			case 1:
				printf("Blue\n");
				break;
			case 2:
				printf("Green\n");
				break;
			case 3:
				printf("Orange\n");
				break;
			case 4:
				system("CLS");
				printf("1 Option1\n2 Option2\n3 Option3\n4 Option4\n0 Return to Main Menu\n");
				scanf("%d",&option);
				while(option!=0){
					switch(option){
						case 1:
							printf("Option 1\n");
							break;
						case 2:
							printf("Option 2\n");
							break;
						case 3:
							printf("Option 3\n");
							break;
						case 4:
							printf("Option 4\n");
							break;
					}	
					system("Pause");
					system("CLS");
					printf("1 Option1\n2 Option2\n3 Option3\n4 Option4\n0 Return to Main Menu\n");
					scanf("%d",&option);
				}
		}	
	system("Pause");
	system("CLS");
	printf("1 Purchases\n2 Sales\n3 Reports\n4 More\n0 Exit\n");
	scanf("%d",&m_option);
	}
	return 0;
}
