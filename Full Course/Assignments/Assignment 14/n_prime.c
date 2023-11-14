#include<stdio.h>
#include<stdlib.h>
short isPrime(unsigned long long);
void n_prime(short);
short isPrime(unsigned long long n){
	unsigned long long n1=2;
	while(n1<n/2){
		if(n%n1==0)
			return 0;
		n1++;
	}
	return 1;
}
void n_prime(short n){
	unsigned long long prime=3;
	printf("Prime nos.: 2 ");
	while(n>1){
		if(isPrime(prime)==1){
			printf("%llu ",prime);
			n--;
		}
		prime+=2;
	}
}
int main(){
	short n;
	printf("Enter any number: ");
	scanf("%d",&n);
	n_prime(n);
}