//                                 :: ADDITION OF TWO 2D ARRAYS OR MATRICES ::
#include<iostream>
using namespace std;

int main()
{
	int m,n,i,j;
	cout<<"Enter the size for both of your Martices\n";
	cin>>m>>n;
	int farr[m][n],sarr[m][n];
	cout<<"Enter the elements of First Matrix\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cin>>farr[i][j];
	}
	cout<<"Enter the elements of Second Matrix\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cin>>sarr[i][j];
	}
	cout<<"\n:: First Matrix ::\n\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<farr[i][j];
			cout<<" ";
		}
		cout<<endl;
	}
	cout<<"\n:: Second Matrix ::\n\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<sarr[i][j];
			cout<<" ";
		}
		cout<<endl;
	}
	cout<<"\n:: Sum of both Matrices ::\n\n";
	//Adding both Matrices and putting it into the first matrix
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			farr[i][j]=farr[i][j]+sarr[i][j];
		}
	}
	//printing the first matrix after addition
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<farr[i][j];
			cout<<" ";
		}
		cout<<endl;
	}

}
