#include<stdio.h>
unsigned long long sum_n_rec(unsigned long long);
unsigned long long sum_n_rec(unsigned long long n){
	if(n==1){
		return 1;
	}
	return (n+sum_n_rec(n-1));
}
int main(){
	unsigned int n;
	printf("Enter any number: ");
	scanf("%hu",&n);
	printf("Sum of %hu first natural nos. %llu",n,sum_n_rec(n));
}