#include <stdio.h>

main(){
	
	int a[5]={16,0,9,9,15},i,sum=0;
	
	for(i=0;i<=4;i++)
		if(i>=1)
			sum=sum+a[i];

	printf("%d",sum);
	return 0;
}
