//Never Give Up Keep Testing
// Infix to Postfix Conversion Using stack in c++
#include<iostream>
using namespace std;

int top=-1,j=0,i=0,k=0;
char temp,stck[10],pstfx[10];

void postfix(char []);
void push(char);
void pop();

int main()
{
	char eq[10];
	cout<<"Enter the equation : ";
	cin>>eq;
	cout<<"\nPostfix expression : ";
	postfix(eq);
	cout<<pstfx;
	cout<<endl;

	return 0;
}

void push(char c)
{
	stck[++top]=c;
}

void pop()
{
	temp=stck[top--];
}

void postfix(char eq[])
{
	while(eq[i]!='\0')
	{
		if(eq[i]=='(')
		{
			push(eq[i]);
					
		}
		else if(eq[i]==')')
		{
			pop();
			pstfx[j++]=temp;
			pop();
		}
		else if(eq[i]=='+'||eq[i]=='-')
		{
			if(stck[top]!='+'&&stck[top]!='-'&&stck[top]!='*'&&stck[top]!='/')
			{
				k++;
				push(eq[i]);
			}
			else
			{	
				if(k>1)
				{
					pop();
					pstfx[j++]=temp;
					pstfx[j++]=stck[top];
					stck[top]=eq[i];
					k--;
				}
				else
				{
					pop();
					pstfx[j++]=temp;
					k++;
					push(eq[i]);
				}
				
			}
		}
		else if(eq[i]=='*'||eq[i]=='/')
		{
			if(stck[top]!='*'&&stck[top]!='/')
			{
				push(eq[i]);
			}
			else
			{
				pop();
				pstfx[j++]=temp;
				push(eq[i]);
			}
		}
		else
		{
			pstfx[j++]=eq[i];
		}
		i++;
	}
	while(top>-1)
	{
		pop();
		pstfx[j++]=temp;	
	}
	pstfx[j]='\0';

}