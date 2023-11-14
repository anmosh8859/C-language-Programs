#include<stdio.h>
#include<conio.h>
int main(){
	int n,i;
	long long int fact=1;
	printf("Enter the no. to find factorial: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("%d! = %lld",n,fact);
	getch();
}
