#include<stdio.h>
void n_odd_nat_rec(unsigned short);
void n_odd_nat_rec(unsigned short n){
	if(n>0){
		n_odd_nat_rec(n-1);
		printf("%hu ",(n*2)-1);
	}
}
int main(){
	unsigned int n;
	printf("Enter any number: ");
	scanf("%hu",&n);
	n_odd_nat_rec(n);
}