#include <stdio.h>

int main(void) {
	char menu_option;

	printf("         BASIC MENU\n");
	printf("------------------------------\n\n");

	do{
	printf("\nMain Menu\n");
	printf("a. option 1\n");
	printf("b. option 2\n");
	printf("c. exit\n");
	printf("Please select and option: ");
	fflush(stdin);
	scanf(" %c", &menu_option);
	
	switch(menu_option){

		case 'a':

		printf("You picked option 1");
		break;
		
		case 'b':

		printf("You picked option 2");
		break;

		case 'c':
		
		printf("Exiting");
		break;
	}
	}while(menu_option !='c');	
}
