#include<stdio.h>
#include<stdlib.h>
struct Stack
{
	int top,capacity,*array;
};
struct Stack* createStack(int cap)
{
	struct Stack *stack;
	stack=malloc(sizeof(struct Stack));
	stack->top=-1;
	stack->capacity=cap;
	stack->array=calloc(cap,sizeof(int));
	return(stack);
}
int isFull(struct Stack *stack)
{
	if(stack->top==stack->capacity-1)
		return(1);
	return(0);
}
int isEmpty(struct Stack *stack)
{
	if(stack->top==-1)
		return(1);
	return(0);
}
void push(struct Stack *stack,int item)
{
	if(!isFull(stack))
	{
		stack->top++;
		stack->array[stack->top]=item;
	}
}
int pop(struct Stack *stack)
{
	if(!isEmpty(stack))
	{
		int item;
		item=stack->array[stack->top];
		stack->top--;
		return(item);
	}
	return(-1);
}
void main()
{
	int element,capacity,option,c;
	struct Stack *stack;
	printf("Enter the capacity of stack");
	scanf("%d",&capacity);
	stack=createStack(capacity);
	while(1)
	{
		printf("Choose one option\n");
		printf("1: Push\n2: Pop\n3: Exit\nOption: ");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				if(!isFull(stack))
				{
					printf("Enter the element in Stack\n");
					scanf("%d",&element);
					push(stack,element);
				}
				else
					printf("Stack is full\n");
				break;
			case 2:
				element=pop(stack);
				if(element==-1)
					printf("stack is Empty\n");
				else
					printf("Element in stack=%d\n",element);
				break;
			case 3:
				free(stack->array);
				free(stack);
				exit(0);
		}
	}
}