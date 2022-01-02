//						Finding out the Max and Min values from an array
#include<iostream>
using namespace std;

void line(int);

int main()
{
	int i,n,min,max;
	cout<<"How many elements you want\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the numbers\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	min=max=arr[0];
	cout<<"\nGiven Array is :- \n\n-";
	line(n);
	cout<<"\n| ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
		cout<<" | ";
	}
	cout<<endl<<"-";
	line(n);
	cout<<endl<<endl;
    for(i=0;i<n;i++)
	{
		(arr[i]>min)?max=arr[i]:min=arr[i]; //(saving 8 extra lines by using ternery operator)
//		if(arr[i]<min) // To find out the minimum number
//		{
//			min=arr[i];
//		}
//		else if(arr[i]>max) // To find out the maximum number
//		{
//			max=arr[i];
//		}
	}
	cout<<"Minimum No. is -> "<<min<<endl;
	cout<<"Maximum No. is -> "<<max<<endl;
	
}

void line(int a)
{
	int i;
	for(i=0;i<a;i++)
	cout<<"-----";	
}