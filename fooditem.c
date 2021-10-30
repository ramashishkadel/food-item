#include<stdio.h>
main()
{
	//1.Display the menu
	printf("pick an item : \n1. Pen\n2. Pencil\n3. Eraser\n4 .Book");
	//2.Read their choice
	int choice=0;
	scanf("%d",&choice);
	
	//3.Display based on their choice
	switch(choice)
	{
		case 1:
			printf(" You picked Pen.");
			break;
		case 2:
			printf(" You picked Pencil.");
			break;
		case 3:
			printf(" You picked Eraser.");
		case 4:
	      	printf(" You picked Book.");
	      	break;
	      default : printf("Invalid choice");
	}
}
