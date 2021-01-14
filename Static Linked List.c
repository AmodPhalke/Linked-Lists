#include<stdio.h>
#define MAX 5
int main(void)
{
	struct node
	{
		int data;
		struct node *next;
	}list[MAX];
	
	int i, n, x;
	
	printf("How many nodes you want to enter\?\n");
	scanf("%d", &n);
	
	if(n > MAX)
	{
		printf("\nImpossible\n");	
	}	
	
	else
	{
		for(i=0;i<n;i++)
		{
			printf("\nEnter the Data Value\n");
			scanf("%d", &x);
			
			if(i == 0)
			{
				list[i].data = x;
				list[i].next = NULL;
			}
			
			else
			{
				list[i-1].next = &list[i];
				list[i].data = x;
				list[i].next = NULL;
			}
		}
	}
	
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("\nData = %d", list[i].data);
		printf("\nAddress = %d", list[i].next);
	}
}
