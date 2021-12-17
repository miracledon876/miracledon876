#include <stdio.h>

main(){
	
	int q[7]={15,13,16,21,40,36,25},i=0,index=0,small=q[0];
	
	for(i=1;i<=6;i++){
		if(q[i]<small){
			small=q[i];
			index=i;
			}
	}
	printf("%d",index);
	return 0;
	}[]
