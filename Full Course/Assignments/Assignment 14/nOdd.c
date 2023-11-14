#include<stdio.h>
int main(){
	void nOdd(int);
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	nOdd(num);
}
void nOdd(int num){
	int i;
	for(i=1;i<=num;i++)
		printf("%d ",(i*2)-1);
}
