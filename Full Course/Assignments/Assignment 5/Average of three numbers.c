#include<stdio.h>
#include<conio.h>
int main(){
	float a,b,c;
	printf("Enter three numbers: ");
	scanf("%f %f %f",&a,&b,&c);
	printf("Average: %f",(a+b+c)/3);
	getch();
}
