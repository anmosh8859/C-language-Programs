#include<stdio.h>
unsigned int hcf(unsigned long,unsigned long);
unsigned int hcf(unsigned long n1,unsigned long n2){
	int n;
	if(n1>n2){
		while(n2>0){
			n=n2;
			n2=n1%n2;
			n1=n;
		}
		return n1;
	}
	else{
		while(n1>0){
			n=n1;
			n1=n2%n1;
			n2=n;
		}
		return n2;
	}
}
int main(){
	int n1,n2;
	printf("Enter two numbers: ");
	scanf("%d%d",&n1,&n2);
	printf("%u,%u\n",(unsigned long)n1,(unsigned long)n2);
	printf("HCF of %d and %d = %u",n1,n2,hcf((unsigned long)n1,(unsigned long)n2));
	return 0;
}
