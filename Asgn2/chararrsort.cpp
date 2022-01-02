//Taking 5 charecters and sorting them alphabetically
#include<iostream>
using namespace std;

int main()
{
	int i,j;
	char arr[5],temp;
	cout<<"Enter Elements\n";
	for(i=0;i<5;i++)
	cin>>arr[i];
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	cout<<arr[i]<<" ";

	return 0;
}