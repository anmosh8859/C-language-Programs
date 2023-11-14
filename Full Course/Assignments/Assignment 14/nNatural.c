#include<stdio.h>
int main(){
	void nNatural(int);
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	nNatural(num);
}
void nNatural(int num){
	int i;
	for(i=1;i<=num;i++)
		printf("%d ",i);
}
