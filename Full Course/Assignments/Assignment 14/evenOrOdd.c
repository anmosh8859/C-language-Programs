#include<stdio.h>
int main(){
	int evenOrOdd(int);
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(evenOrOdd(num))
		printf("Number is even");
	else
		printf("Number is odd");
}
int evenOrOdd(int num){
	if(num%2==0)
		return 1;
	else
		return 0;
}
