#include <stdio.h>
#include <stdlib.h>
void login();
void change_pass()
{
	printf("working\n");
}
void help()
{
	printf("working\n");
}

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

void customer_details()
{
		int ch;
	do
	{
		//setcolor(2);
		//settextstyle(3,0,3);
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
}

void stock()
{
	printf("working\n");
}

void plans()
{
	printf("working\n");
}

void main_menu()
{
	int ch;
	do
	{
		//setcolor(2);
		//settextstyle(3,0,3);
		printf("MAIN MENU\n");
		printf("1.Login\n");
		printf("2.Change password\n");
		printf("3.Help\n");
		printf("4.Exit\n");
		printf("Enter yourchoice ::\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: login();
					break;
			case 2: change_pass();
					break;
			case 3: help();
					break;
			case 4: exit(0);
					break;
			default:printf("Invalid choice \n");
		}
	}while(1);
}

void login()
{
	int ch;
	do
	{
		//setcolor(2);
		//settextstyle(3,0,3);
		printf("MAIN MENU\n");
		printf("1.Customer Details\n");
		printf("2.Stock\n");
		printf("3.Plans and Rate\n");
		printf("4.Back to Main Menu\n");
		printf("Enter yourchoice ::\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: customer_details();
					break;
			case 2: stock();
					break;
			case 3: plans();
					break;
			case 4: main_menu();
					break;
			default:printf("Invalid choice \n");
		}
	}while(1);
}

int main()
{
	main_menu();
	return 0;
}
