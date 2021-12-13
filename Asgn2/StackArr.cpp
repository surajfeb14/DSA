#include<iostream>
using namespace std;

void push(int &top,int arr[],int a)
{
	arr[top]=a;
	cout<<"Pushed"<<a<<endl;
	top++;
}
void pop(int &top,int arr[])
{
	cout<<"Popped"<<arr[top]<<endl;
	top--;
}

int main()
{
	int arr[4]={0,0,0,0},top=0;
	
	push(top,arr,4);
	push(top,arr,3);
	pop(top,arr);
	pop(top,arr);
	push(top,arr,1);
	pop(top,arr);
	push(top,arr,5);
	
	for(int i=0;i<4;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}