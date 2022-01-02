#include<stdio.h>

typedef struct n
{
	int data;
	struct node *link;
}node;

int main()
{
	node *head=NULL,*temp,*temp1;
	int c=0,i=0;
	do
	{
		printf("1 to enter 2 to display : ");
		scanf("%d",&c);
		if(c==1)
		{
			if(i!=0)
			{
				temp1=head;
				while((*temp1).link!=NULL)
				{
					temp1=(*temp1).link;
				}
				temp=(node*)malloc(sizeof(node));
				scanf("%d",&(*temp).data);
				(*temp).link=NULL;
				(*temp1).link=temp;
			}
			else
			{
				temp=(node*)malloc(sizeof(node));
				scanf("%d",&(*temp).data);
				(*temp).link=NULL;
				head=temp;
				i++;
			}
		}
	}while(c!=2);
	
	temp1=head;
	while((*temp1).link!=NULL)
		{
			printf("%d ",(*temp1).data);
			temp1=(*temp1).link;
		}
		printf("%d ",(*temp1).data);
	
	return 0;
}