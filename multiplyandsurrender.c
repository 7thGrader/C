#include<stdio.h>
#define ulli unsigned long long int
unsigned long long int fib(unsigned long long int input) {
	if(input<=1) {
		return 1;
	}
	else {
		return fib(input-1)+fib(input-2);
	}
}
int main() {
	ulli a=0;
	for(;;) {
		printf("F_%llu = %llu\n",a+1,fib(a));
		a++;
	}
	return 0;
}
