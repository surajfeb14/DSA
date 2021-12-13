//Insertion sort using pointers
#include<iostream>
using namespace std;

int main()
{
	int i,j,n,temp,*ptr;
	cout<<"How many elements you need?\n";
	cin>>n;
	int arr[n];
	ptr=arr;
	cout<<"Enter the numbers\n";
	for(i=0;i<n;i++)
	cin>>*(ptr+i);
	cout<<"\nGiven Array :\n| ";
	for(i=0;i<n;i++)
	cout<<*(ptr+i)<<" | ";
	
	for(i=1;i<n;i++)
	{
		temp=*(ptr+i);
		j=i-1;
		while(j>=0 && *(ptr+j)>temp)
		{
			arr[j+1]=*(ptr+j);
			j--;
		}
		*(ptr+j+1)=temp;
	}
	cout<<"\n\nArray after INSERTION Sort\n| ";
	for(i=0;i<n;i++)
	cout<<*(ptr+i)<<" | ";
}