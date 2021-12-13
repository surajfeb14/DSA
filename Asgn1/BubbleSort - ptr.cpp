//Sorting array using bubble sort using pointers
#include<iostream>
using namespace std;

int main()
{
	int i,j,n,*ptr;
	cout<<"How many elements you want in array? \n";
	cin>>n;
	int arr[n];
	cout<<"Enter  your Numbers\n";
	for(i=0;i<n;i++)
	cin>>arr[i];
	ptr=arr;
	for(i=1;i<n;i++)//to difine how many psses will be there 
	{
		for(j=0;j<n-i;j++)//to difine how many swaps will be there
		{
			if(*(ptr+j)>*(ptr+j+1))//to swap elements
			{
				*(ptr+j)=*(ptr+j)+*(ptr+j+1);
				*(ptr+j+1)=*(ptr+j)-*(ptr+j+1);
				*(ptr+j)=*(ptr+j)-*(ptr+j+1);
			}
		}
	}
	cout<<"\nArray after bubble sort\n";
	for(i=0;i<n;i++)
	{
		cout<<*(ptr+i)<<" ";
	}
	
	return 0;
}
