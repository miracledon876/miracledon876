#include <stdio.h>

main(){
	
	int i,num;
	scanf("%d",&num);
	if(num>=1){
		if(num<=12){
			for(i=18;i>-5;i--){
				printf("\n%d * %d = %d",num,i,i*num);
			}
		}
	}
}
