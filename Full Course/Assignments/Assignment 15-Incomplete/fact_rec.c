#include<stdio.h>
unsigned long fact_rec(unsigned long long);
unsigned long fact_rec(unsigned long long n){
	if(n==1)
		return 1;
	return n*fact_rec(n-1);
}
int main(){
	unsigned short n;
	printf("Enter any number: ");
	scanf("%hu",&n);
	printf("%hu! = %llu",n,fact_rec(n));
}