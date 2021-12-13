//Linear Search using pointer
#include<iostream>
using namespace std;

int main()
{
	int i,n,f,*ptr,c=0;
	cout<<"How many elements you need?\n";
	cin>>n;
	int arr[n];
	ptr=arr;
	cout<<"Enter the numbers\n";
	for(i=0;i<n;i++)
	cin>>*(ptr+i);
	cout<<"\nGiven Array : \n| ";
	for(i=0;i<n;i++)
	cout<<*(ptr+i)<<" | ";
	cout<<"\n\nWhich number you want to search?\n";	
	cin>>f;
	for(i=0;i<n;i++)
	{
		if(f==*(ptr+i))
		{
		c++;	
		}
	}
	if(c>0)
	{
		cout<<"\n:: The number "<<f<<" is Present in the array ::\n";	
	}
	else
	{
		cout<<"\n:: The number "<<f<<" is Not Present in the array ::\n";	
	}
	
	return 0;
}