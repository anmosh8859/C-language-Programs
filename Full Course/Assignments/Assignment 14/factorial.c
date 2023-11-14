#include<stdio.h>
int main(){
	  long long factorial(int);
	  int num;
	  printf("Enter the number: ");
	  scanf("%d",&num);
	  printf("Factorial of %d: %lld",num,factorial(num));
}
long long factorial(int num){
	long long fact=1;
	while(num){
		fact=fact*num;
		num--;
	}
	return fact;
}
