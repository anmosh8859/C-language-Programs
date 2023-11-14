#include<stdio.h>
int main(){
	float simpleInterest(int,float,int);
	int p,t;
	float r;
	printf("Enter the principle, rate and time respectively: ");
	scanf("%d%f%d",&p,&r,&t);
	printf("Simple Interest: %f",(simpleInterest(p,r,t)));
}
float simpleInterest(int p, float r, int t){
	return (p*r*t)/100;
}
