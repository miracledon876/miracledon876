#include <stdio.h>

main(){
	
	int i,p,bruh=1;
	
	scanf("%d",&p);
	for(i=2;i<=p;i++){
		bruh=bruh*i;
	}
	printf("%d\n",bruh);
	return 0;
}
