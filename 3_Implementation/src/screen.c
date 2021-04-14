#include "elements.h"
/**
 * @brief Function to set the interface of the application
 * 
 */
void newScreen() {
	// clrscr();
	int width = 132;
	char str[] = "PERIODIC TABLE";
	int length = sizeof(str) - 1;
	int pad = (length >= width) ? 0 : (width - length) / 2;
	printf("%*.*s%s\n", pad, pad, " ", str);
    // printf("%s",str);
	for(int i=0; i<4; i++){
		printf("\n");
	}
}
