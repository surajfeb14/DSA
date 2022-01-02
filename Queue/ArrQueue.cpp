//Queuue using array
#include<iostream>
using namespace std;
int arr[6],i=0,front=-1,rear=-1;
void enqueue(int n)
{
    if(rear==((sizeof(arr)/sizeof(arr[0]))-1)){
        cout<<"Queue Overflowed"<<endl;
    }
    else if(i==0){
        arr[i]=n;
        front++;
        rear++;
		cout<<"Element EnQueued : "<<arr[i]<<endl;
    }else{
        arr[i]=n;
        rear++;
		cout<<"Element EnQueued : "<<arr[i]<<endl;
    }
    
	i++;
}
void dequeue()
{
    if(rear==-1){
        cout<<"Empty Queue"<<endl;
    }else{
	cout<<"Element DeQueued : "<<arr[front]<<endl;
    for(int j=0;j<rear;j++)
    {
        arr[j]=arr[j+1];
    }
    rear--;
	i--;
    }
}
void peek()
{
    cout<<"Front Element of the queue : "<<arr[front]<<endl;
}
void display()
{
    for(int k=0;k<=rear;k++)
    {
        cout<<arr[k]<<" ";
    }
}
int main()
{
    dequeue();
    enqueue(4);
    enqueue(7);
    dequeue();
    enqueue(1);
    enqueue(9);
    enqueue(2);
    enqueue(8);
    peek();
    enqueue(2);
    enqueue(5);
	enqueue(5);
	enqueue(5);
	display();

    return  0;
}