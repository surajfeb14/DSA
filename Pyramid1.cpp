// Pyramid of ascending nummbers
#include<iostream>
using namespace std;

int main()
{
	int i,j,n,c=1;
	cout<<"Pyramid of Ascending numbers\n"<<"How many lines you want to print?\n";
	cin>>n;
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<c<<" ";
			c++;
		}
		cout<<endl;
	}
	return 0;
}