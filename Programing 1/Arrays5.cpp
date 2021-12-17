#include <stdio.h>

main(){
	
	int i=0,found=0,id[6]={301,563,412,215,631,621};
	float salary[6]={1010.26,900.63,40.36,0,1001.26,916.57};
	
	while(i<=5 && found==0)
		if(id[i]==631)
			found=1;
		else
			i++;
	if(found==1)
		printf("%.2f",salary[i]);
}
