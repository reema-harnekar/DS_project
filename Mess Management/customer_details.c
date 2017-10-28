#include <stdio.h>
#include <stdlib.h>
void seach_customer()
{
	printf("working\n");
}

void search_by_plan()
{
	printf("working\n");
}

void pending_bills()
{
	printf("working\n");
}

void payments()
{
	printf("working\n");
}
int main()
{
	int ch;
	do
	{
		//setcolor(2);
		//settextstyle(3,0,3);
		clear();
		printf("MAIN MENU\n");
		printf("1.Search Customer\n");
		printf("2.Search By Plans\n");
		printf("3.Pending bills\n"); 
		printf("5.Back to previous Menu");
		printf("Enter yourchoice ::\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: seach_customer();
					break;
			case 2: search_by_plan();
					break;
			case 3: pending_bills();
					break;
			case 4: payments();
					break;
			case 5: login();
					break;
			default:printf("Invalid choice \n");
		}
	}while(1);
	return 0;
}
