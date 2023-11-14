#include<stdio.h>
#include<conio.h>
int main(){
	int i,n;
	long long int j=0,k=1;
	printf("Enter how many nos of fabonacii series you want to print?: ");
	scanf("%d",&i);
	printf("0\n1\n");
	for(n=1;n<=i-2;n++){
		printf("%llu\n",j+k);
		k=j+k;
		j=k-j;
	}
	getch();
	return(0);
}
