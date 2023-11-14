#include<stdio.h>
#include<stdlib.h>
int primeGenerator(int n)
{
	int num,j,v;
	static int i,count,*p;
	if(n<=0)
		return 0;
	if(p==NULL&&n>0)
	{
		p=(int*)calloc(sizeof(int),n);
		count=n;
		num=n;
		j=0;
		v=2;
		while(num)
		{
			if(isPrime(v))
			{
				p[j]=v;
				j++;
				num--;
			}
		v++;
		}
		return p[i];
	}
	if(i==count-1)
	{
		free(p);
		p=NULL;
		i=0;
		return(0);
	}
	i++;
	return p[i];
}
int isPrime(int n)
{
	int i;
	for(i=2;i<(n/2)+1;i++)
	{
		if(n%i==0)
			return(0);
	}
	return(1);
}
void main()
{
	int n,i;
	printf("How many prime numbers you need: ");
	A:scanf("%d",&n);
	printf("%d\n",primeGenerator(n));
	printf("Enter \"-1\" for exit\n");
	if(n==-1)
		exit(1);
	goto A;
}
