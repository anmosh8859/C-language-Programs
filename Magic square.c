#include<stdio.h>
void main()
{
	int n;
	printf("Enter the first digit of magic square\n");
	scanf("%d",&n);
	printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n",(n+7),(n+10),(n+13),n,(n+12),(n+1),(n+6),(n+11),(n+2),(n+15),(n+8),(n+5),(n+9),(n+4),(n+3),(n+14));
	getch();
}
