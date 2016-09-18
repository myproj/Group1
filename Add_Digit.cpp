//Group 1
// Changes made after revert tagged version "With_printf_scanf"

#include<stdio.h>
 
int main()
{
   int n, sum = 0, remainder;
   bool flag=false;
 
   printf("Enter an integer\n");
   scanf("%d",&n);
    
   if(n<0){
   		flag = true;
   		n = -1*n; }
   	
   while(n/10 != 0)
   {
      remainder = n % 10;
	  printf("The Remainder is %d\n", remainder);
      sum = sum + remainder;
	  printf("The Sum is %d\n", sum);
      n = n / 10;
	  printf("The n is %d\n", n);
   }
   
   if(flag) 
   	sum+= (-1*n);
   else
   	sum+= n;
 
   printf("Sum of digits of entered number = %d\n",sum);
 
   return 0;
}
