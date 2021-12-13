//:: DIFFERENT TYPES OF OPERATIONS IN 1D ARRAAY ::
#include<iostream>
using namespace std;

int main()
	{
		int n,i,min,max,odc,evc,sum;
		odc=evc=sum=0;
		cout<<"How many numbers you're going to enter?\n";
		cin>>n;
		int arr[n];
		cout<<"Enter your numbers\n";
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		min=max=arr[0];
		cout<<"\nGiven Array is :- \n";
		for(i=0;i<n;i++)
		{
			cout<<"-----";
		}
		cout<<endl;
		cout<<"| ";
		for(i=0;i<n;i++)
		{
			cout<<arr[i];
			cout<<" | ";
		}
		cout<<"\n";
			for(i=0;i<n;i++)
		{
			cout<<"-----";
		}
		cout<<endl;
		
		for(i=0;i<n;i++)
		{
			if(arr[i]<min) // To find out the minimum number
			{
				min=arr[i];
			}
			if(arr[i]>max) // To find out the maximum number
			{
				max=arr[i];
			}
			if(arr[i]%2==0) // To find out the number of even numbers
			{
				evc++;
			}
			else           // To find out the number of odd numbers
			{
				odc++;
			}
			sum=sum+arr[i];
		}
		cout<<"Minimum is -> "<<min<<endl<<"Maximun is -> "<<max<<endl;
		cout<<"Odd count -> "<<odc<<endl<<"Even count -> "<<evc<<endl;
		cout<<"Sum of the array -> "<<sum<<endl<<"Average -> "<<sum/n<<endl;
		
		
	return 0;
	}