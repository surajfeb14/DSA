//Binary Search using pointers
#include<iostream>
using namespace std;

void sort(int,int *);
int binsearch(int,int,int *);

int main()
{
	int i,j,n,f,*ptr;
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
	sort(n,ptr);
	cout<<"\n\nWhich number you want to search?\n";	
	cin>>f;
	if(binsearch(n,f,ptr)==1)
	{
		cout<<"\n:: The number "<<f<<" is Present in the array ::\n";	
	}
	else
	{
		cout<<"\n:: The number "<<f<<" is Not Present in the array ::\n";
	}
return 0;
	
}
void sort(int n, int *ptr)
{
	int i,j,min;	
		
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(*(ptr+j)<*(ptr+min))
			{
				min=j;
			}
			
		}
		if(min!=i)
			{
				*(ptr+i)=*(ptr+i)+*(ptr+min);
				*(ptr+min)=*(ptr+i)-*(ptr+min);
				*(ptr+i)=*(ptr+i)-*(ptr+min);
			}
	}
}
int binsearch(int n,int f,int *ptr)
{
	int r,m,l;
	r=0;
	l=n-1;
	while(r<=l)
	{
		m=(r+l)/2;
		if(*(ptr+m)==f)
		{
			return 1;
		}
		if(*(ptr+m)<f)
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