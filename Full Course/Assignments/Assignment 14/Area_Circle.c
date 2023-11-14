#include<stdio.h>
int main(){
	float area_circle(float);
	float r;
	printf("Enter the radius: ");
	scanf("%f",&r);
	printf("%f",area_circle(r));
}
float area_circle(float f){
	return (3.14*f*f);
}
