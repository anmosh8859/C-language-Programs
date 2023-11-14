#include<stdio.h>
#include<conio.h>
int main(){
	float x,y,z;
	printf("Enter length of three sides of triangle: ");
	scanf("%f %f %f",&x,&y,&z);
	printf((x<(y+z)&&y<(x+z)&&z<(x+y))?"Triangle is valid.":"Triangle is Invalid.");
	getch();
}
