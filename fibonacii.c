/*Lab No. 21
  Program : Write a program to print the following Fibo nacci series
	        1	1	2	3	 5	  8    13	  21    34    55
  Date : 2016-12-27
*/
  
#include<stdio.h>
  int main(){
  int a=1,b=1,sum=0,i;
  
  printf("1\t1");
  
  for(i=1;i<9;i++)
  {
	sum=a+b;
	printf("\t%d",sum);
	a=b;
	b=sum;
	
	}
  	
  	printf("\n");
  	
  	return 0;
  	
  	}				
