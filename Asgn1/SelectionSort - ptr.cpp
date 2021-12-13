//Sorting array using Selection sort
#include<iostream>
using namespace std;

int main()
{
	int n,i,j,min,*ptr;
	cout<<"How many elements you want?\n";
	cin>>n;
	int arr[n];
	ptr=arr;
	cout<<"Enter the values\n";
	for(i=0;i<n;i++)
	cin>>*(ptr+i);
	
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n-1;j++)
		{
			if(*(ptr+j)<*(ptr+min))
			{
				min=j;
			}
			if(min!=i)
			{
				*(ptr+i)=*(ptr+i)+*(ptr+min);
				*(ptr+min)=*(ptr+i)-*(ptr+min);
				*(ptr+i)=*(ptr+i)-*(ptr+min);
			}
		}
	}
	cout<<"\nArray after selection sort\n";
	for(i=0;i<n;i++)
	cout<<*(ptr+i)<<" ";
}