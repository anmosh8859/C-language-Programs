#include<stdio.h>
int main(){
	long long combination(int, int);
	int n,r;
	printf("Enter the number of items and selected items respectively: ");
	scanf("%d%d",&n,&r);
	printf("Number of Combinations: %lld",combination(n,r));
}
long long combination(int n, int r){
	long long fact(int);
	return (fact(n)/(fact(r)*fact(n-r)));
}
long long fact(int num){
	long long fact=1;
	while(num){
		fact=fact*num;
		num--;
	}
	return fact;
}
