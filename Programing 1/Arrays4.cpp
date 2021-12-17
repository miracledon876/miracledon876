#include <stdio.h>

main(){
	
	int a[5]={16,0,9,9,15},i,j=0,square=0;
	
	for(i=4;i>=0;i--){
		square=a[i]*a[i];
		printf("%d\n",square);
	}
	printf("%d",j);
	return 0;
}
