#include<stdio.h>
unsigned long long sum_n_odd_rec(unsigned long long);
unsigned long long sum_n_odd_rec(unsigned long long n){
	if(n==1){
		return 1;
	}
	return (n*2-1+sum_n_odd_rec(n-1));
}
int main(){
	unsigned int n;
	printf("Enter any number: ");
	scanf("%hu",&n);
	printf("Sum of %hu first even natural nos. %llu",n,sum_n_odd_rec(n));
}