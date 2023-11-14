#include<stdio.h>
#include<conio.h>
int main(){
	int i=1;
	long long int n;
	printf("Enter the no. to count its digits: ");
	scanf("%lld",&n);
	if(n==0)
		i=0;
	while(n/10>0||n/10<0){
		++i;
		n=n/10;
	}
	printf("no of digits in %lld = %d",n,i);
	getch();
}
