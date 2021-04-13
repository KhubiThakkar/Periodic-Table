#include "elements.h"

void again() {
	char ans1[5];
	printf("\n\nSEARCH FOR A DIFFERENT ELEMENT? : ");
	scanf("%s",ans1);
	if (tolower(ans1[0])=='y'){
		search();
	} else {
		quit();
	}
	printf("\n\n");
}