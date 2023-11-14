#include<stdio.h>
unsigned long long fibonacci_rec(unsigned long long);
unsigned long long fibonacci_rec(unsigned long long n){
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else{
		return fibonacci_rec(n-1)+fibonacci_rec(n-2);
	}
}
int main(){
	unsigned short n;
	printf("Enter any number: ");
	scanf("%hu",&n);
	printf("%huth term of fibonacci series: %llu",n,fibonacci_rec(n-1));
}