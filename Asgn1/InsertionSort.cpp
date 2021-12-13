//Insertion Sort
#include<iostream>
using namespace std;

int main()
{
	int i,j,n,temp;
	cout<<"How many elements you need?\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the numbers\n";
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<"\nGiven Array :\n| ";
	for(i=0;i<n;i++)
	cout<<arr[i]<<" | ";
	
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	cout<<"\n\nArray after INSERTION Sort\n| ";
	for(i=0;i<n;i++)
	cout<<arr[i]<<" | ";
}