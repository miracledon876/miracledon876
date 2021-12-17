#include <stdio.h>

int main(){

	int a=1,r=0,b;
	while(a<13){
		for(b=1;b<13;b++){
			r=a*b;
			printf("%d x %d = %d\n",a,b,r);
		}
		a++;
	}
}
