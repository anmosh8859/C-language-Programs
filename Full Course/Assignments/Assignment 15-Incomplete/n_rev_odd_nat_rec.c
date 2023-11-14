#include<stdio.h>
void n_rev_odd_nat_rec(unsigned short);
void n_rev_odd_nat_rec(unsigned short n){
	if(n>0){
		printf("%hu ",(n*2)-1);
		n_rev_odd_nat_rec(n-1);
	}
}
int main(){
	unsigned int n;
	printf("Enter any number: ");
	scanf("%hu",&n);
	n_rev_odd_nat_rec(n);
}