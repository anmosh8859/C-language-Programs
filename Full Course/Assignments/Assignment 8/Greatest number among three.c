#include<stdio.h>
#include<conio.h>
int main(){
	float x,y,z;
	printf("Enter any three numbers: ");
	scanf("%f %f %f",&x,&y,&z);
	if(x>=y&&x>=z)
		printf("%f is greatest among all the entered numbers.",x);
	if(y>=x&&y>=z)
		printf("%f is greatest among all the entered numbers.",y);
	if(z>=x&&z>=y)
		printf("%f is greatest among all the entered numbers.",z);
	getch();
}
