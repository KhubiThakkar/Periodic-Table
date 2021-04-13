#include "elements.h"

void search() {
	newScreen();
	printf("SREACH BY :- \n\n");
	printf("\t1 -> ELEMENT\n");
	printf("\t2 -> SYMBOL\n");
	printf("\t3 -> ATOMIC NUMBER\n\n");
	int choice2;
	printf("YOUR CHOICE : ");
	scanf("%d",&choice2);
    FILE *fp = fopen("/home/khubithakkar/Periodic-Table/3_Implementation/src/data.csv", "r");
    if (!fp){
        printf("Can't open file\n");
    }else{
        if (choice2==1){
            byName(fp);
        } else if (choice2==2){
            bySym(fp);
        } else if (choice2==3){
            byAtNum(fp);
        } else {
            search();
        }
    }
}