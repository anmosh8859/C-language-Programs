#include<stdio.h>
#include<conio.h>
int main(){
	int j=2,a,b,h=1;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	while(j<a&&j<b){
		while(a%j==0&&b%j==0){
			a=a/j;
			b=b/j;
			h=h*j;
		}
		j++;
	}
	printf("H.C.F.= %d",h);
	return 0;
}
