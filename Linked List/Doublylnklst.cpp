#include<iostream>
using namespace std;

struct node
{
    int data;
    node *pre,*next;
};
node *head=NULL,*tail=NULL,*temp,*temp1;
void insert()
{
    temp1=head;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp = new node();
    cout<<"Enter the Number : ";
    cin>>temp->data;
    temp->pre=temp1;
    temp1->next=temp;
    temp->next=NULL;
    tail=temp;
}
void display()
{
    cout<<"\n:: Displaying Head to Tail ::\n";
    temp1=head;
    cout<<temp1->data<<" ";
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
        cout<<temp1->data<<" ";
    }
    cout<<"\n\n:: Displaying Tail to Head ::\n";
    temp1=tail;
    cout<<temp1->data<<" ";
    while(temp1->pre!=NULL)
    {
        temp1=temp1->pre;
        cout<<temp1->data<<" ";
    }
}
int main()
{int i=0,c=1;
    do
    {
        if (i==0&&c==1)
        {
            cout<<"Enter the First Number : ";
            temp = new node();
            cin>>temp->data;
            head=temp;
            tail=temp;
            temp->pre=temp->next=NULL;
            i++;
        }else{
            cout<<"1) to Enter a number 0) to print : ";
            cin>>c;
            switch(c)
            {
                case 1:insert();
                break;
            }
            i++;
        }

    }while(c);

    display();

    return 0;
}