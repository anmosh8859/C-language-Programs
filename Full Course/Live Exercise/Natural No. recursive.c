#include<stdio.h>
void natural(int);
void natural(int n){
	if(n>0){
		natural(n-1);
		printf("%d ",n);
	}
}
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	natural(n);
}
