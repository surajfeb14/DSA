//Inserting and deleting elements from an array
#include<iostream>
using namespace std;

void insert(int ,int []);
void remove(int ,int []);

int main()
{
	int i,n,inp;
	cout<<"How many elements you want?\n";
	cin>>n;
	n=n+1;
	int arr[n];
	cout<<"Enter your numbers\n";
	for(i=0;i<n-1;i++)
	cin>>arr[i];
	cout<<"Given array is : \n| ";
	for(i=0;i<n-1;i++)
	cout<<arr[i]<<" | ";
	
	cout<<"\nGive input 1 to insert or 0 to delete an element\n";
	cin>>inp;
	
	if(inp==1)
	{
		insert(n,arr);	
	}
	else
	{
		remove(n,arr);
	}
	
}

void insert(int a,int brr[])
{
	int i,ins,insn;
	cout<<"In which position you want to insert the value?\n";
	cin>>ins;
	ins=ins-1;
	cout<<"Which value you want to insert?\n";
	cin>>insn;
	for(i=a;i>ins;i--)
	{
		brr[i]=brr[i]+brr[i-1];
		brr[i-1]=brr[i]-brr[i-1];
		brr[i]=brr[i]-brr[i-1];
	}
	brr[ins]=insn;
	cout<<"Array After Insertion\n| ";
	for(i=0;i<a;i++)
	cout<<brr[i]<<" | ";
}

void remove(int a,int brr[])
{
	int i,del;
	cout<<"Which position you want to delete?\n";
	cin>>del;
	del=del-1;
	for(i=del;i<a;i++)
	{
		brr[i]=brr[i]+brr[i+1];
		brr[i+1]=brr[i]-brr[i+1];
		brr[i]=brr[i]-brr[i+1];
	}
	cout<<"Array After Deletion :\n| ";
	for(i=0;i<(a-2);i++)
	cout<<brr[i]<<" | ";
}