#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int n,l,b,n1,n2,n3;
	float r;
	while(1)
	{
		printf("Enter your Choices:\n");
		printf("1. Area of circle\n");
		printf("2. Area of Rectangle\n");
		printf("3.Average of three numbers\n");
		printf("4. Exit\n");
		scanf("%d",&n);
		switch(n){
			case 1:
				printf("Enter the radius of the circle: ");
				scanf("%f",&r);
				printf("Area of Circle: %f\n",3.14*r*r);
				break;
			case 2:
				printf("Enter the length and breadth of the rectangle respectively: ");
				scanf("%d%d",&l,&b);
				printf("Area of rectangle: %d\n",l*b);
				break;
			case 3:
				printf("Enter the three numbers: ");
				scanf("%d%d%d",&n1,&n2,&n3);
				printf("Average of three numbers: %d\n",(n1+n2+n3)/3);
				break;
			case 4:
				exit(0);
			default:
				printf("default\n");
		}
	}
}
