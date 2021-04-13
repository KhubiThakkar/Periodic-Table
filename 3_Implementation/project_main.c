#include "elements.h"

int main() {
	newScreen();
	printf("1 -> EXPLORE\n");
	printf("2 -> QUIT\n\n\n\n");
	int choice1;
	printf("YOUR CHOICE : ");
	scanf("%d",&choice1);
	if (choice1==1){
		search();
	} else if (choice1==2){
		quit();
	} else {
		main();
	}
	return 0;
}