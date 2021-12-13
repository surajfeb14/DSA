//                         :: CREATION OF 2D ARRAY AND ADDION OF IT'S ELEMENTS ::
#include<iostream>
using namespace std;

int main()
{
	int m,n;
	cout<<"Koto Koto chai?\n";
	cin>>m>>n;
	int arr[m][n];
	int i,j,sum=0,csum=0,dsum=0;
	cout<<"Enter your numbers\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
		
	}
	cout<<"\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
			sum = sum + arr[i][j];
			if(m==n & i==j)
			{
				dsum=dsum+arr[i][j];
			}
		}
		cout<<" "<<sum;
		sum=0;
		cout<<endl;
	}

	for(j=0;j<n;j++)
	{
		csum=0;
		for(i=0;i<m;i++)
		{
			csum = csum + arr[i][j];
		}
		cout<<csum<<" ";    
	}
	if(m==n)
	{
	cout<<" "<<dsum;
	}
	else
	{
		cout<<" *";
	}
	
return 0;
}