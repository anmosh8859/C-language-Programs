#include<stdio.h>
#include<conio.h>
int main(){
	int i,j=1,k=1,l=2;
	for(i=1;i<=5;i++){
		if(i<4){
			for(j=l;j>0;j--)
				printf(" ");
			l--;
			for(j=1;j<=k;j++)
				printf("*");
			k+=2;
		}
		if(i==3){
			k-=2;
			l++;
		}
		if(i>3){
			k-=2;
			l++;
			for(j=1;j<=l;j++)
				printf(" ");
			for(j=1;j<=k;j++)
				printf("*");
		}
		printf("\n");
	}
	getch();
}
