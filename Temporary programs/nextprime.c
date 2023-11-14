#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,j;
	printf("Enter the prime: ");
	scanf("%d",&n);
	if(n==2)
		printf("Next Prime: %d",3);
	else if(n==3)
		printf("Next Prime: %d",5);
	else if(n==5)
		printf("Next Prime: %d",7);
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
					printf("Next Prime: %d",n);
					exit(0);
				}
			j++;
			}
		}
	}
}

