// Group 1
// It prints out the sum of digits in number .

#include<stdio.h>
#include<iostream>

int main()
{
   int n, sum = 0, remainder;
 
   cout<<"Enter an integer\n";
   cin>>n;
    
   while(n != 0)
   {
      remainder = n % 10;
	  cout<<"The Remainder is "<<remainder<<"\n";
      sum = sum + remainder;
	  cout<<"The Sum is "<<sum<<"\n";
      n = n / 10;
	  cout<<"The n is "<<n<<"\n";
   }
 
   cout<<"Sum of digits of entered number = "<<sum<<"\n";
 
   return 0;
}
