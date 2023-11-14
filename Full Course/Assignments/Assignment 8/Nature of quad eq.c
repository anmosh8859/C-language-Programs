#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c;
	printf("Enter the coefficients of quad. equations a, b and c respectively: ");
	scanf("%d%d%d",&a,&b,&c);
	if(((b*b)-4*a*c)<0)
		printf("Roots are imaginary");
	else if(((b*b)-4*a*c)>0)
		printf("Roots are Real");
	else
		printf("Roots are real and equal");
	getch();
}
