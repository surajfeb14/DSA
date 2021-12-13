//                           Checking and finding out the prime numbers from an array
#include<iostream>
using namespace std;

void line(int);

int main()
{
	int i,n,j,c=0,p=0;
	cout<<"How many elements you need in array?\n";
	cin>>n;
	int arr[n],prr[n];
	
	cout<<"Enter your numbers\n";
	for(i=0;i<n;i++)
	cin>>arr[i];
	
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
		for(j=1;j<=arr[i];j++)
		{
			if(arr[i]%j==0)//checking prime or not
			{
				c++;
			}	
		}
		if(c==2)
			{
				p++;//counting prime numbers
				prr[p-1]=arr[i];//storing prime numbers 
			}
			c=0;
	}
	cout<<"Prime Count -> "<<p<<"\nPrime Numbers are -> ";
	
	for(i=0;i<p;i++)//printing stored prime numbers
	{
		cout<<prr[i]<<" ";
	}
	cout<<endl;
}

void line(int a)//for designing purpose :)
{
	int i;
	for(i=0;i<a;i++)
	cout<<"-----";	
}