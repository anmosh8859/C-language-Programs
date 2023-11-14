#include<stdio.h>
int isPrime(int);
int isPrime(int n){
	int n1=2;
	while(n1<n/2){
		if(n%n1==0)
			return 0;
			n1++;
	}
	return 1;
}
int main(){
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	if(isPrime(n)==1)
		printf("Entered no. is prime.");
	else
		printf("Entered no. not prime");
}
