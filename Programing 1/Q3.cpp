#include <stdio.h>
#include <string.h>
#include <stdlib.h>


main(){
	char name[15];
	int b_count=0,g_count=0;
	
	printf("Enter the last name\nUse 'stop' to end\n");
	fflush(stdin);
	gets(name);
	while(strcmp(name,"stop")!=0){
		if(strcmp(name,"Burns")==0)
			b_count+=1;
		else if(strcmp(name,"Gagliano")==0)
			g_count+=1;
		printf("Enter the last name\nUse 'stop' to end\n");
		fflush(stdin);
		gets(name);
	}
	system("CLS");
	printf("Burns entered: %d\nGagliano entered: %d",b_count,g_count);
	return 0;
}
