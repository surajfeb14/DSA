#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

void insertbefore(node **, node **);
void insertafter(node *, node *, node *);
void insertat(node *,node *,node *,int);
void display(node *, node *);

int main()
{
    int i = 0,c = 1;
    node *head = NULL, *temp, *temp1;
    do
    {
        if (c == 1 && i == 0)
        {
            temp = new node();
            cout << "Enter Your First number ";
            cin >> temp->data;
            temp->next = NULL;
            head = temp;
            i++;
        }
        else
        {
            cout << "1) To Enter Before 2) To Enter Before : ";
            cin >> c;
            switch (c)
            {
            case 1:
                insertbefore(&head, &temp);
                // cout<<head<<" ";
                break;
            case 2:
                insertafter(head, temp, temp1);
                break;
            case 3: insertat(head,temp,temp1,i);
                break;
            default:
                break;
            }
            i++;
        }
    } while (c != 0);
    display(head, temp);

    return 0;
}
void insertafter(node *h, node *t, node *t1)
{
    t1 = h;
    while (t1->next != NULL)
    {
        t1 = t1->next;
    }
    t = new node();
    cout << "Enter a number : ";
    cin >> t->data;
    t->next = NULL;
    t1->next = t;
}
void insertbefore(node **h, node **t)
{
    (*t) = new node();
    (*t)->next = NULL;
    cout << "Enter a number : ";
    cin >> (*t)->data;
    // cout<<h<<" "<<t<<" "<<t->next<<endl;
    (*t)->next = (*h);
    (*h) = (*t);
    // free(t);
    // cout<<h<<" "<<t<<" "<<t->next<<endl;
}
void insertat(node *h,node *t,node *t1,int c)
{
    int i;
    cout<<"Enter position : ";
    cin>>i;
    if(i==0||i==1)
    {
        insertbefore(&h,&t);
    }
    else if(i==c)
    {
        insertafter(h,t,t1);
    }
    else
    {
        t1=h;
        while(i>1) 
        {
            t1=t1->next;
        }
        t=new node();
        t->next=t1->next;
        cin>>t->data;
        t1->next=t;
    }
}
void display(node *h, node *t)
{
    t=h;
    cout<<t->data<<" ";
    // cout<<h<<" "<<t<<" "<<t->next<<" "<<t->data<<endl;
    while(t->next!=NULL)
    {
        t = t->next;
        cout << t->data << " ";
    }
}