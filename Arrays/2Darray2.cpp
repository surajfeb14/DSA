//                    2d array operations using 2d array
#include<iostream>
using namespace std;

int main()
{
	int i,j,r,c,m,n,rsum=0,csum=0,dsum=0;
	cout<<"Enter no. of rows and columns you want?\n";
	cin>>m>>n;
	//int arr[m][n];
	int arr[m+1][n+1];
	cout<<"Enter the values\n";
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		cin>>arr[i][j];
		if(m==n && i==j)
			{
				dsum=dsum+arr[i][j];
			}
		}
		for(r=0;r<n;r++)
		{
			rsum=rsum+arr[i][r];
		}
		arr[i][j]=rsum;
		rsum=0;
	}
	if(m==n)
	{
		arr[i][j]=dsum;
	}
	else
	{
		arr[i][j]=0;
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<m;i++)
		{
			csum=csum+arr[i][j];
		}
		arr[i][j]=csum;
		csum=0;
	}
	
	cout<<endl;
	for(i=0;i<m+1;i++)
	{
		for(j=0;j<n+1;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;	
	return 0;	
}