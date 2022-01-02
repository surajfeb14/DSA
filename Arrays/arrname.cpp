//Arranging names like sURaJ DaS siNgH -> Suraj Das Singh
#include<iostream>
using namespace std;

int main()
{
	int i=0,ascii,ascii1;
//	string arr;
//	getline(cin,arr);
	char arr[50];
	gets(arr);

	for(i=0;arr[i]!='\0';i++)
	{
		ascii=arr[i];
		ascii1=arr[i-1];
		if(i==0)
		{
			if(ascii>96 && ascii<123)
			{
				ascii-=32;
				arr[i]=ascii;
			}
		}
		else if(ascii1==32)
		{
			if(ascii>96 && ascii<123)
			{
				ascii-=32;
				arr[i]=ascii;
			}
			ascii1=arr[i];
		}
		else if(ascii>64 && ascii<91)
		{
			ascii+=32;
			arr[i]=ascii;
		}
	}
	cout<<arr;
	return 0;	
}