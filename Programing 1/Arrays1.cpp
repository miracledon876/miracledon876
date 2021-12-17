#include <stdio.h>

main(){
	
	int a[5]={16,0,9,9,15},i,j=0;
	
	for(i=0;i<=4;i++)
		if(a[i]>10)
			j++;

	printf("%d",j);
	return 0;
}
