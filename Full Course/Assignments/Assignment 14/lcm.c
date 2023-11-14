#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	long LCM(int,int);
	int nextPrime(int);
	int n1,n2;
	printf("Enter two integers: ");
	scanf("%d%d",&n1,&n2);
	printf("LCM: %ld",LCM(n1,n2));
	return 0;
}
long LCM(int n1, int n2){
	int n=2;
	long lcm=1;
	while(n<=n1||n<=n2){
		while((n1%n)==0||(n2%n)==0){
			lcm*=n;
			if(n1%n==0&&n2%n==0){
				n1/=n;
				n2/=n;
			}
			else if(n1%n==0)
				n1/=n;
			else if(n2%n==0)
				n2/=n;
		}
		n=nextPrime(n);
	}
	return lcm;
}
int nextPrime(int n){
	int j;
	if(n<2){
	printf("Invalid Prime");
	exit(0);	
	}
	else if(n==2)
		return 3;
	else if(n==3)
		return 5;
	else if(n==5)
		return 7;
	else{
		n+=2;
		while(n){
			j=3;
			while(j<n/2){
				if(n%j==0){
					n+=2;
					break;
				}
				if(j==(n/2-1)){
					return n;
					exit(0);
				}
			j++;
			}
		}
	}
}
