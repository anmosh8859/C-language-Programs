#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int n,i;
	printf("Enter any number to check it is prime or not: ");
	scanf("%d",&n);
	for(i=2;i<n/2;i++){
		if(n%i==0){
			printf("%d is not prime no., it is divisible by %d.",n,i);
			getch();
			exit(0);
		}
	}
	if(i==(n/2))
		printf("%d is a prime no.",n);
}
