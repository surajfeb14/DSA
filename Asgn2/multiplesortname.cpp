#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

void sortname(string []);

struct stud
{
	string name[50];
	int roll;
};

int main()
{
	int n,i;
	cout<<"How many studens are there?"<<endl;
	cin>>n;
	struct stud s1[n];
	cout<<"Enter the details\n";
	
	for(i=0;i<n;i++)
	{
//		cout<<"Roll no. of student no. "<<i+1<<") : ";
//		cin>>s1[i].roll;
		cout<<"Name of student no. "<<i+1<<") : ";
		//getchar();
		cin.getline(s1[i].name, 50);
		
	}
//do
//{
//	cout<<"Name of student no. "<<i+1<<") : ";
//		gets(s1[i].name);	
//		i++;
//}
//while(i<n);

	
	for(i=0;i<n;i++)
	{
		sortname(s1[i].name);
	}
	
	cout<<"List of the Sudents:- \n";
	cout<<"       Name         |         Roll\n";
	
	for(i=0;i<n;i++)
	{
		cout<<i+1<<")    "<<s1[i].name<<endl;//<<"           "<<s1[i].roll<<endl;		
	}
	
	return 0;
}

void sortname(string arr[])
{
	
	int i;
 char ascii,ascii1;


	for(i=0;arr[i]!='\0';i++)
	{
		cout<<"+ve"<<endl;
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
}