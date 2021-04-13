#include "elements.h"

void search() {
    char ele[20];
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
            printf("ENTER THE ELEMENT'S NAME : ");
            scanf("%s",ele);
            byName(fp,ele);
            again();
        } else if (choice2==2){
            printf("ENTER THE ELEMENT'S SYMBOL : ");
            scanf("%s",ele);
            bySym(fp,ele);
            again();
        } else if (choice2==3){
            printf("ENTER THE ELEMENT'S ATOMIC NUMBER : ");
            scanf("%s",ele);
            byAtNum(fp,ele);
            again();
        } else {
            search();
        }
    }
}