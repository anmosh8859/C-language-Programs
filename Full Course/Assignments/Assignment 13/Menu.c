#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int n,n1,n2;
	float n3,n4;
	while(1){
		printf("Your Choices: \n");
		printf("1. Addition\n");
		printf("2. Substraction\n");
		printf("3. Multiplication\n");
		printf("4. Divivsion\n");
		printf("0. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&n);
		switch(n){
			case 0:
				exit(0);
			case 1:
				printf("Enter the two numbers: ");
				scanf("%d%d",&n1,&n2);
				printf("Sum: %d\n",n1+n2);
				break;
			case 2:
				printf("Enter the two numbers: ");
				scanf("%d%d",&n1,&n2);
				printf("Difference: %d\n",n1-n2);
				break;
			case 3:
				printf("Enter the two numbers: ");
				scanf("%d%d",&n1,&n2);
				printf("Product: %d\n",n1*n2);
				break;
			case 4:
				printf("Enter the two numbers: ");
				scanf("%f%f",&n3,&n4);
				printf("Quotient: %f\n",n3/n4);
				break;
			default:
				printf("Enter the right choice.\n");
		}
	}
}
