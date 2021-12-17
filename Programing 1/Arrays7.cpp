#include <stdio.h>

main(){

	int q[7],i,opt,value,found;
	
	for(i=0;i<=6;i++)
		q[i]=-1;
	
	do{
		printf("1. Add\n2. Display\n0. Exit\n");
		scanf("%d",&opt);
		switch(opt){
		case 1:
			found=i=0;
			while(found==0 && i<=6)
				if(q[i]==-1)
					found=1;
			else
				i++;
			if (found==1){
				printf("Enter a value\n");
				scanf("%d",&value);
				q[i]=value;
			}else
				printf("No space\n");
			break;
		case 2:
			i=0;
			while(q[i]!=-1){
				printf("%d\n",q[i]);
				i++;
			}
			break;
		}
	}while(opt!=0);
	return 0;
}
