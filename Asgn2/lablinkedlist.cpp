#include<iostream>
using namespace std;
int val;
struct node
{
	int data;
	struct node *link;
};

void insert(node *head,node *temp,node *temp1)
{
	temp1=head;
	while(temp1->link!=NULL)
	{
		temp1=temp1->link;
	}
	temp=new node();
	temp->data=val;
	temp->link=NULL;
	temp1->link=temp;
}

void display(node *head,node *temp,node *temp1)
{
	temp1=head;
	while(temp1->link!=NULL)
	{
		cout<<temp1->data<<" ";
		temp1=temp1->link;
	}
	cout<<temp1->data<<" ";
}

int main()
{
	node *head=NULL,*temp,*temp1;
	int i=0,c=1;
	while(c)
	{
		cout<<"1) to enter 0) to show & exit : ";
		cin>>c;
		if(c==1)
		{
			if(i!=0)
			{
			cout<<"Enter the value : ";
			cin>>val;
			insert(head,temp,temp1);	
			}
			else
			{
			cout<<"Enter the value : ";
			cin>>val;
			temp=new node();
			temp->data=val;
			temp->link=NULL;
			head=temp;
			i++;
			}
		}
		else if(c==0)
		{
			break;
		}
		else
		cout<<"Enter a valid input \n";
	}
	display(head,temp,temp1);

	
	return 0;
}
