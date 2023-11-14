#include<stdio.h>
unsigned long long sum_n_even_rec(unsigned long long);
unsigned long long sum_n_even_rec(unsigned long long n){
	if(n==1){
		return 2;
	}
	return (n*2+sum_n_even_rec(n-1));
}
int main(){
	unsigned int n;
	printf("Enter any number: ");
	scanf("%hu",&n);
	printf("Sum of %hu first even natural nos. %llu",n,sum_n_even_rec(n));
}