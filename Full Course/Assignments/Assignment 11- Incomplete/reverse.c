#include<stdio.h>
#include<conio.h>
int main(){
	long long int n,rev=0;
	printf("Enter the no. to reverse it's digits': ");
	scanf("%lld",&n);
	while(n>0){
		rev=(10*rev)+(n%10);
		n=n/10;
	}
	printf("Reversed no.: %lld",rev);
	getch();
}
