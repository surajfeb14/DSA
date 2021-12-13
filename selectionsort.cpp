//Sorting array using Selection sort
#include<iostream>
using namespace std;

int main()
{
	int n,i,j,min;
	cout<<"How many elements you want?\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the values\n";
	for(i=0;i<n;i++)
	cin>>arr[i];
	
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
			
		}
		if(min!=i)
			{
				arr[i]=arr[i]+arr[min];
				arr[min]=arr[i]-arr[min];
				arr[i]=arr[i]-arr[min];
			}
	}
	cout<<"Array after selection sort\n";
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
}