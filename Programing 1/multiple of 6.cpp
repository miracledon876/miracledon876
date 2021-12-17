#include <stdio.h>

main(){
	
	int q[7]={15,3,16,21,40,36,25},i,count=0;
	
	while(i<=6 && count==0){
		if(q[i]%6==0){
			count=1;
		}else{
			i++;
		}
	}
	if(count=1){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
	}
