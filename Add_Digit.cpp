/* Group 1
 It prints out the sum of digits in number by calculating remainder
*/

#include<stdio.h>
#include<iostream>
using namespace std;
 
int main()
{
   int n, sum = 0, remainder;
   bool flag=false;
 
   cout<<"Enter an integer\n";
   cin>>n;
    
   if(n<0){
   		flag = true;
   		n = -1*n; }
   	
   while(n/10 != 0)
   {
      remainder = n % 10;
	  cout<<"The Remainder is "<<remainder<<"\n";
      sum = sum + remainder;
	  cout<<"The Sum is "<<sum<<"\n";
      n = n / 10;
	  cout<<"The n is "<<n<<"\n";
   }
   
   if(flag) 
   	sum+= (-1*n);
   else
   	sum+= n;
 
   cout<<"Sum of digits of entered number = "<<sum<<"\n";
 
   return 0;
}
