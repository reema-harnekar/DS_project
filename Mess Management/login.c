#include <stdio.h>
#include <curses.h>

int main()
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
	return 0;
   
}
