//Sorting array using bubble sort
#include<iostream>
using namespace std;

int main()
{
	int i,j,n;
	cout<<"How many elements you want in array? \n";
	cin>>n;
	int arr[n];
	cout<<"Enter  your Numbers\n";
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=1;i<n;i++)//to difine how many psses will be there 
	{
		for(j=0;j<n-i;j++)//to difine how many swaps will be there
		{
			if(arr[j]>arr[j+1])//to swap elements
			{
				arr[j]=arr[j]+arr[j+1];
				arr[j+1]=arr[j]-arr[j+1];
				arr[j]=arr[j]-arr[j+1];
			}
		}
	}
	cout<<"\nArray after bubble sort\n";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
