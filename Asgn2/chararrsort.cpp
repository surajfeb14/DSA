#include<iostream>
using namespace std;

int main()
{
	int i,j,p,brr[5];
	char arr[5],temp;
	
	for(i=0;i<5;i++)
	cin>>arr[i];
	
	for(i=0;i<4;i++)
	{
		temp=arr[i];
		for(j=i;j<5;j++)
		{
			if(temp<arr[j+1])
			{
				temp=arr[j+1];
				p=j+1;		
			}
			brr[i]=p;
		}
	}
	
	for(i=0;i<5;i++)
	cout<<brr[i]<<" ";
	//cout<<temp<<endl<<p;

//int arr[5]={2,3,0,4,1},i,t;
//char brr[5]={'c','e','a','b','d'};
//
//for(i=0;i<5;i++)
//{
//	t=arr[i];
//	cout<<brr[t]<<endl;
//}
	
	

	
	
	return 0;
}