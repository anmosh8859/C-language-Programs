#include<stdio.h>
#include<conio.h>
int main(){
	float phy,chem,bio,math,comp;
	printf("Enter the physics marks out of 100: ");
	scanf("%f",&phy);
	printf("Enter the chemistry marks out of 100: ");
	scanf("%f",&chem);
	printf("Enter the biology marks out of 100: ");
	scanf("%f",&bio);
	printf("Enter the maths marks out of 100: ");
	scanf("%f",&math);
	printf("Enter the computer marks out of 100: ");
	scanf("%f",&comp);
	printf("Total percentage: %f",(phy+chem+bio+math+comp)/5);
	if((phy+chem+bio+math+comp)/5>=90)
		printf(" and Grade is A");
	else if((phy+chem+bio+math+comp)/5>=80)
		printf(" and Grade is B");
	else if((phy+chem+bio+math+comp)/5>=70)
		printf(" and Grade is C");
	else if((phy+chem+bio+math+comp)/5>=60)
		printf(" and Grade is D");
	else if((phy+chem+bio+math+comp)/5>=40)
		printf(" and Grade is E");
	else
		printf(" and Grade is F");
}
