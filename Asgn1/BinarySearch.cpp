//Binary Search
#include<iostream>
using namespace std;

void sort(int,int []);
int binsearch(int,int,int[]);

int main()
{
	int i,j,n,f;
	cout<<"How many elements you need?\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the numbers\n";
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<"\nGiven Array : \n| ";
	for(i=0;i<n;i++)
	cout<<arr[i]<<" | ";
	sort(n,arr);
//	cout<<"\nSorted Array : \n| ";
//	for(i=0;i<n;i++)
//	cout<<arr[i]<<" | ";
	cout<<"\n\nWhich number you want to search?\n";	
	cin>>f;
	if(binsearch(n,f,arr)==1)
	{
		cout<<"\n:: The number "<<f<<" is Present in the array ::\n";	
	}
	else
	{
		cout<<"\n:: The number "<<f<<" is Not Present in the array ::\n";
	}
return 0;
	
}
void sort(int n, int arr[])
{
	int i,j,min;	
		
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
}
int binsearch(int n,int f,int arr[])
{
	int r,m,l;
	r=0;
	l=n-1;
	while(r<=l)
	{
		m=(r+l)/2;
		if(arr[m]==f)
		{
			return 1;
		}
		if(arr[m]<f)
		{
			r=m+1;
		}
		else
		{
			l=m-1;
		}
	}
	return 0;
}