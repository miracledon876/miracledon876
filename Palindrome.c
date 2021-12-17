/* Program Name:	Palindrome.c
	Program Description:
	this program will read a string of a maximum 49 characters in length, the
   string is then passed to function stringEnd() that determines the length of
   the string and return the length to main. This value is then passed along
   with the string to function palCheck() which will compare the characters to
   determine if the string is a palindrome or not.
   Author:	Jenice Lynch
   Date:		October 23, 2011
   
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


int stringEnd(char[]);
int palCheck(char[],int);

int main()
{

  int x,diff;
  char str[50],opt;

  do{
  	printf("\n\nPlease enter Palindrome string: ");
 	gets(str);

  	x=stringEnd(str);

   diff=palCheck(str,x-1);

  	if(diff==0)    /* if there is no difference the string is a palindrome*/
  		printf("\n\" %s \" is a Palindrome", str);
   else
   	printf("\n\" %s \" is not a Palindrome", str);

   printf("\n\nWant to try another [y/n]? ");
   opt=getch();
   clrscr();
  }while(opt == 'y');

  printf("\n\n\tGoodbye Have a Nice Day");
  getch();
  return 0;
}

int stringEnd(char string[]){
	int z;
             /*finds the end of the string*/
   for(z=0;string[z]!='\0';z++);

 	return z;
}


int palCheck(char string[], int end)
{
	int i,dif=0;

   for(i=0;i<end;i++,end--){ /* if a space is encountered move to the next character
   									in the string*/
       if(string[i]==' ')
       		i++;
       if(string[end]==' ')
         	end--;
       if(string[i]!= string[end])/* if there is a difference in the characters
       										 it is counted*/
       	dif++;
   }
   return dif;  /* returns the number of differences found */
}


