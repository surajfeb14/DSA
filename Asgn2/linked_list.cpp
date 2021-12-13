#include<iostream>
using namespace std;

typedef struct n
{
	int data;
	struct n* link;
}node;

int main()
{
	node *head=NULL,*temp,*temp1;
	int c=0,i=0;
	do
	{
		cout<<"1 to enter 2 to display : ";
		cin>>c;
		if(c==1)
		{
			if(i!=0)
			{
				temp1=head;
				while(temp1->link!=NULL)
				{
					temp1=temp1->link;
				}
				temp=new node();
				cin>>temp->data;
				temp->link=NULL;
				temp1->link=temp;
			}
			else
			{
				temp=new node();
				cin>>temp->data;
				temp->link=NULL;
				head=temp;
				i++;
			}
		}
	}while(c!=2);
	
	temp1=head;
	while(temp1->link!=NULL)
	{
		cout<<temp1->data<<" ";
		temp1=temp1->link;
	}	
	cout<<temp1->data;
		
	
	return 0;
}