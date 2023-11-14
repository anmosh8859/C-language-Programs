#include<stdio.h>
unsigned short sum_digit_rec(unsigned long long);
unsigned short sum_digit_rec(unsigned long long n){
	if(n/10>0)
		return n%10+sum_digit_rec(n/10);
}
int main(){
	unsigned long long n;
	printf("Enter any number: ");
	scanf("%llu",&n);
	printf("Sum of digits %llu is %hu",n,sum_digit_rec(n));
}