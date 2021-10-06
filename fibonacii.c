/*Lab No. 21
  Program : Write a program to print the following Fibo nacci series
	        1	1	2	3	 5	  8    13	  21    34    55
  Date : 2016-12-27
*/

#include<stdio.h>

int fib(int n)
{
  /* Declare an array to store Fibonacci numbers. */
  int f[n+2];   // 1 extra to handle case, n = 0
  int i;
 
  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = 0;
  f[1] = 1;
 
  for (i = 2; i <= n; i++)
  {
      /* Add the previous 2 numbers in the series
         and store it */
      f[i] = f[i-1] + f[i-2];
  }
 
  return f[n];
}
  

  int main(){
	  
	  int n = 9;
  printf("%d", fib(n));
//   int a=1,b=1,sum=0,i;
  
//   printf("1\t1");
  
//   for(i=1;i<9;i++)
//   {
// 	sum=a+b;
// 	printf("\t%d",sum);
// 	a=b;
// 	b=sum;
	
// 	}
  	
//   	printf("\n");
  	
  	return 0;
  	
  	}				
