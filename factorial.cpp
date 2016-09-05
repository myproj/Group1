// Reverting Back 

#include "functions.h"
#include<stdio.h>
int factorial(int n){
	if(n<=0)
	{
		cout<<"Please Re-enter +ve number";
		return -1;
	}
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
