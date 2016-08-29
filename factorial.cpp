#include "functions.h"
#include <cstdio>

int factorial(int n){
    if(n<0)
	printf("Re-enter a positive number\n");
    else if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
