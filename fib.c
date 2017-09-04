#include <stdio.h>

int fibonacci(int n){
	if(n == 0) return 0;
	else if(n == 1) return 1;
	else return fibonacci(n-2)+fibonacci(n-1);
}

/* Ternary Operator */
int fibonacci_ternary(int n){
	return (n == 0 ) ? 0 : (n == 1) ? 1 : fibonacci_ternary(n-1)+fibonacci_ternary(n-2);
}

int main() {
	int number = 5;
	printf("Fibonacci of %d is %d \n",number, fibonacci(number));
	printf("Fibonacci (Using Ternary Operator) of %d is %d \n",number, fibonacci_ternary(number));

	return 0;    
}

