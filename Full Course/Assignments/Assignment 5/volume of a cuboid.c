#include<stdio.h>
#include<conio.h>
int main(){
	float l,b,h;
	printf("Enter the length, breadth and height of a cuboid respectively: ");
	scanf("%f %f %f",&l,&b,&h);
	printf("\nVolume: %f",l*b*h);
	getch();
}
