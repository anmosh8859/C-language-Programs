#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int n,s1,s2,s3;
	printf("Enter three numbers: ");
	scanf("%d%d%d",&s1,&s2,&s3);
	while(1){
		printf("Your Choices: \n");
		printf("1. Check whether three numbers are sides of isoceles triangle.\n");
		printf("2. Check whether three numbers are sides of a right angled triangle.\n");
		printf("3. Check whether three numbers are sides of a equilateral triangle.\n");
		printf("0. Exit\n");
		scanf("%d",&n);
		switch(n){
			case 1:
				if((s1+s2==s3)||(s2+s3==s1||s3+s1==s2))
					printf("Yes, Numbers are the lengths of side of isosceles triangle\n");
				else
					printf("Not length of side of isosceles triangle.\n");
				break;
			case 2:
				if((s1*s1+s2*s2==s3*s3)||(s2*s2+s3*s3==s1*s1||s3*s3+s1*s1==s2*s2))
					printf("Yes, Numbers are the lengths of side of right angled triangle\n");
				else
					printf("Not length of side of right angled triangle.\n");
				break;
			case 3:
				if(s1==s2&&s2==s3)
					printf("Yes, Numbers are the lengths of side of equilateral triangle\n");
				else
					printf("Not length of side of equilateral triangle.\n");
				break;
			case 0:
				exit(0);
			default:
				printf("You entered a wrong choice.\n");
		}
	}
}
