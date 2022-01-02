//Stack Using Linked list
#include<iostream>
using namespace std;

struct node{
    int data;
    node *pre;
};
node *temp,*prelink;
int i=-1,s;
void push(int n)
{
    if(i==(s-1)){
        cout<<"\nStack Overflow\n";
    }
    else{
    temp = new node();
    temp->data=n;
    cout<<"\nPushed data : "<<temp->data<<endl;
    temp->pre=prelink;
    prelink=temp;
    i++;
    }
}
void pop()
{
    if(i<0){
        cout<<"\nStack Underflow\n";
    }else{
    cout<<"\nPopped data : "<<prelink->data<<endl;
    temp=prelink->pre;
    free(prelink);
    prelink=temp;
    i--;
    }
}
void peek()
{
    if(i<0){
        cout<<"\nStack is Empty\n";
    }else
    cout<<"\nTop Value is : "<<prelink->data<<endl;
}
int main()
{
    s=3;
    cout<<"Stack Size is : "<<s<<endl;

    peek();
    push(7);
    push(6);
    pop();
    push(2);
    push(0);
    push(4);
    pop();
    pop();
    pop();
    pop();

    return 0;
}