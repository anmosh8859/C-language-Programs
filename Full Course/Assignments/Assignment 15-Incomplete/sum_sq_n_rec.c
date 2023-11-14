#include<stdio.h>
unsigned long long sum_sq_n_rec(unsigned long long);
unsigned long long sum_sq_n_rec(unsigned long long n){
	if(n==1){
		return 1;
	}
	return (n*n+sum_sq_n_rec(n-1));
}
int main(){
	unsigned int n;
	printf("Enter any number: ");
	scanf("%hu",&n);
	printf("Sum of %hu first square of natural nos. %llu",n,sum_sq_n_rec(n));
}