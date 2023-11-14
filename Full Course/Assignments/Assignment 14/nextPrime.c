#include<stdio.h>
#include<stdlib.h>
short isPrime(unsigned long);
unsigned long nextPrime(unsigned long);
short isPrime(unsigned long n){
	unsigned int n1=2;
	while(n1<n/2){
		if(n%n1==0)
			return 0;
		n1++;
	}
	return 1;		
}
unsigned long nextPrime(unsigned long n){
	if(n<0){
		printf("Incorrect Input");
		exit(0);
	}
	if(n==0||n==1)
	return 2;
	if(n%2==0)
		n++;
	else
		n+=2;
	while(isPrime(n)==0){
		n+=2;
	}
	return n;
}
int main(){
	unsigned long n;
	printf("Enter any number\n");
	scanf("%lu",&n);
	printf("Next prime number: %lu",nextPrime(n));
}