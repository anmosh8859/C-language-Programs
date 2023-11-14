#include<stdio.h>
void sq_n_nat_num(unsigned long long);
void sq_n_nat_num(unsigned long long n){
	if(n>0){
		sq_n_nat_num(n-1);
		printf("%llu ",n*n);
	}
}
int main(){
	unsigned short n;
	printf("Enter any number: ");
	scanf("%hu",&n);
	sq_n_nat_num(n);
}