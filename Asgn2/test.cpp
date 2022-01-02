//Never Give Up Keep Testing
#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

struct stud
{
	string name;
	int roll;
};
void sortname(stud);
int main()
{
	int n,i;
	cout<<"How many studens are there?"<<endl;
	cin>>n;
	struct stud s1[n];
	cout<<"Enter the details\n";
	
	for(i=0;i<n;i++)
	{
		cout<<"Roll no. of student no. "<<i+1<<") : ";
		//getchar();

		cin>>s1[i].roll;
		cin.ignore();
		cout<<"Name of student no. "<<i+1<<") : ";
		getline(cin, s1[i].name);
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
		sortname(s1[i]);
	}
	cout<<"\n:: List of the Sudents :: \n\n";
	cout<<"--------------------------------\n";
	cout<<"\tName\t|\tRoll\n";
	cout<<"--------------------------------\n";
	
	for(i=0;i<n;i++)
	{
		cout<<i+1<<")\t"<<s1[i].name<<"\t\t"<<s1[i].roll<<endl;
	}
	
	return 0;
}

void sortname(stud &arr)
{
	// for(i=0;i<n;i++)
	// {
	// 	sortname(s1[i].name);
	// }
	
	int i;
 char ascii,ascii1;
//cout<<arr;

	for(i=0;arr.name[i]!='\0';i++)
	{
		//cout<<"+ve"<<endl;
		ascii=arr.name[i];
		ascii1=arr.name[i-1];
		if(i==0)
		{
			if(ascii>96 && ascii<123)
			{
				ascii-=32;
				arr.name[i]=ascii;
			}
		}
		else if(ascii1==32)
		{
			if(ascii>96 && ascii<123)
			{
				ascii-=32;
				arr.name[i]=ascii;
			}
			ascii1=arr.name[i];
		}
		else if(ascii>64 && ascii<91)
		{
			ascii+=32;
			arr.name[i]=ascii;
		}
		//arr.name[i]='S';
		//cout<<arr.name[i];
	}	
}