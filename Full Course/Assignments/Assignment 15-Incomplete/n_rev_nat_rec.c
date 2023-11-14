#include<stdio.h>
void n_rev_nat_rec(unsigned short);
void n_rev_nat_rec(unsigned short n){
	if(n>0){
		printf("%hu ",n);
		n_rev_nat_rec(n-1);
	}
}
int main(){
	unsigned short n;
	printf("Enter any Number: ");
	scanf("%hu",&n);
	n_rev_nat_rec(n);
}