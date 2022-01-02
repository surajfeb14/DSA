#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
void insert (node *,node *,node *);
void display(node *,node *);
int main()
{
    int i=0,c=0;
    node *head=NULL,*temp,*temp1;
    do
    {
        cout<<"1) to Enter a number 0) to display and exit : ";
        cin>>c;
        if(c==1){
            if(i==0){
                temp = new node();
                cout<<"Enter a number : ";
                cin>>temp->data;
                temp->next=NULL;
                head=temp;
                i++;
            }else{
                insert(head,temp,temp1);
            }
        }
    } while (c!=0);
    display(head,temp);

    return 0;
}
void insert (node *h,node *t,node *t1){
    t1=h;
    while(t1->next!=NULL){
        t1=t1->next;
    }
    t=new node();
    cout<<"Enter a number : ";
    cin>>t->data;
    t->next=NULL;
    t1->next=t;
}
void display(node *h,node *t){
    t=h;
    cout<<t->data<<" ";
    while(t->next!=NULL)
    {
        t=t->next;
        cout<<t->data<<" ";
    }
}