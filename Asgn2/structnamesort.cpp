#include<iostream>
#include<stdio.h>
using namespace std;

void sortname(char *);

struct stud
{
	char name[50];
	int roll;
};

int main()
{
	char *ptr;
	stud s1;
	gets(s1.name);
	cin>>s1.roll;
	ptr=&(s1.name[0]);
	sortname(ptr);
	
	cout<<s1.name<<" "<<s1.roll;
	
	return 0;
}

void sortname(char *ptr)
{
	
	int i;
	char ascii,ascii1;
//	string arr;
//	getline(cin,arr);
//	char arr[50];
//	gets(arr);

	for(i=0;*(ptr+i)!='\0';i++)
	{
		ascii=*(ptr+i);
		ascii1=*(ptr+i-1);
		if(i==0)
		{
			if(ascii>96 && ascii<123)
			{
				ascii-=32;
				*(ptr+i)=ascii;
			}
		}
		else if(ascii1==32)
		{
			if(ascii>96 && ascii<123)
			{
				ascii-=32;
				*(ptr+i)=ascii;
			}
			ascii1=*(ptr+i);
		}
		else if(ascii>64 && ascii<91)
		{
			ascii+=32;
			*(ptr+i)=ascii;
		}
	}	
}