#include <stdio.h>
#include "mylib/mylib.h"

int main(void){

	int N = 10;

	printf("%d! = %d = %d\n",N, fibonacciIterative(N), fibonacciRecursive(N));

	for(int i = 1; i <= N; i++){
		if (fibonacciIterative(i)!= fibonacciRecursive
		(i)){
			printf("[ERROR]\n");
		}
		else{
			printf("F(%d) = %d = %d\n",i,
			fibonacciIterative(i), fibonacciRecursive(i));
		}
	}

	return 0;
}
