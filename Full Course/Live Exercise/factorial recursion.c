#include<stdio.h>
long long unsigned fact(int);
long long unsigned fact(int n){
	if(n==2)
		return 2;
	if(n==1||n==0)
		return 1;
	return (long long unsigned)n*fact(n-1);
}
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("%d! = %llu",n,fact(n));
}
