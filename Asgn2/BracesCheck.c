#include<stdio.h>
int top=-1;

void check1(char arr[]);
void push(char [],char);
char getrev(char);
void pop();

int main()
{
	char arr[50];
	printf("Enter the equation : ");
	gets(arr);
	check1(arr);
	if(top==-1)
	{
		printf("Valid");
	}
	else
	printf("Invalid");
	
	return 0;
}
void check1(char arr[])
{
	int i;
	char stack[50];
	for(i=0;i<arr[i]!='\0';i++)
	{
		if(arr[i]=='('||arr[i]=='{'||arr[i]=='[')
		{
			push(stack,arr[i]);
		}
		else if(arr[i]==')'||arr[i]=='}'||arr[i]==']')
		{
			if(stack[top]==getrev(arr[i]))
			{
				pop();
			}
		}
		else
		{
			continue;
		}
	}
}

void push(char stack[],char n)
{
	stack[++top]=n;
}
void pop()
{
	top--;
}
char getrev(char c)
{
	switch (c)
	{
		case ')': return '(';
		case '}': return '{';
		case ']': return '[';
	}
}

