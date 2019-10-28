#include <stdio.h>
#include <stdlib.h>

void 
dog() 
{
	int i;
	printf("1. Husky\n");
	printf("2. Pitbull\n");
	printf("3. Pug\n");
	printf("now choose a breed of dog: ");
	scanf("%d", &i);
	if (i == 1) {
		printf("you have picked the Husky\n");
	}
	if (i==2) {
		printf("you have picked the Pitbull\n");
	}
	if (i==3) {
		printf("you have picked the Pug\n");
	}
	int y;
	printf("Would you like to exit or restart?\n");
	printf("1. Restart\n");
	printf("2. Exit\n");
	printf("Selection: ");
	scanf("%d",&y);
	switch (y) {
		case 1:
			return;
			break;
		case 2:
			printf("Thank your for playing!\n");
			exit(0);
			break;
		default:
			printf("invalid input\n");
	}
}
void 
cat() 
{
	int i;
	printf("1. Siamese\n");
	printf("2. Bombay\n");
	printf("3. Dwelf\n");
	printf("now choose a breed of cat: ");
	scanf("%d",&i);
	if (i==1) {
		printf("you have picked the Siamese\n");
	}
	if (i==2) {
		printf("you have picked the Bombay\n");
	}
	if (i==3) {
		printf("you have picked the Dwelf\n");
	}
	int y;
	printf("Would you like to exit or restart?\n");
	printf("1. Restart\n");
	printf("2. Exit\n");
	printf("Selection: ");
	scanf("%d",&y);
	switch (y) {
		case 1:
			return;
			break;
		case 2:
			printf("Thank your for playing!\n");
			exit(0);
			break;
		default:
			printf("invalid input\n");
	}

}

void 
hamster() 
{
	int i;
	printf("1. Dwarf\n");
	printf("2. Robo\n");
	printf("3. Chinese\n");
	printf("now choose a breed: ");
	scanf("%d",&i);
	if (i==1) {
		printf("you have picked the Dwarf\n");
	}
	if (i==2) {
		printf("you have picked the Robo\n");
	}
	if (i==3) {
		printf("you have picked the Chinese\n");
	}
	int y;
	printf("Would you like to exit or restart?\n");
	printf("1. Restart\n");
	printf("2. Exit\n");
	printf("Selection: ");
	scanf("%d",&y);
	switch (y) {
		case 1:
			return;
			break;
		case 2:
			printf("Thank your for playing!\n");
			exit(0);
			break;
		default:
			printf("invalid input\n");
	}
}

int 
main(int argc, const char *argv[]) 
{
	while(argc = 1){
		int i;
		printf("Please Select an animal\n");
		printf("1. Dog\n");
		printf("2. Cat\n");
		printf("3. Hamster\n");
		printf("4. Exit\n");
		printf("Selection: ");
		scanf("%d", &i);
		switch (i) {
			case 1:
				dog();
				break;
			case 2:
				cat();
				break;
			case 3:
				hamster();
				break;
			case 4:
				printf("Thanks for playing!\n");
				exit(0);
				break;
			default:
				printf("wrong input, exiting\n");
		}
	}
	return 0;
}
