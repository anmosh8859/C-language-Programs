#include<stdio.h>
int main(){
	int i,j,k,l,m;
	for(i=0,j=3,k=1;i<4,j>=0,k<=4;i++,j--,k++){
		l=j,m=1;
		while(l>=0){
			printf(" ");
			l--;
		}
		while(m<=k){
			printf("%d",m);
			m++;
		}
		m=1;
		while(m<k){
			printf("%d",m);
			m++;
		}
		printf("\n");
	}
	getch();
}
