#include<stdio.h>
void n_natural_recursion(unsigned short);
void n_natural_recursion(unsigned short n){
	if(n>0){
		n_natural_recursion(n-1);
		printf("%hu ",n);
	}
}
int main(){
	unsigned short n;
	printf("Enter any Number: ");
	scanf("%hu",&n);
	n_natural_recursion(n);
}