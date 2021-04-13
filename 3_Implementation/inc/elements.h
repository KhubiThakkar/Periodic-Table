#ifndef __heading_h__
#define __heading_h__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct element{
		char name[25];
		char anum[4];
		char symb[3];
		char awgh[6];
		char neutrons[3];
		char protons[3];
		char electrons[3];
		char period[3];
		char group[3];
		char phase[10];
		char ra[5];
		char nat[5];
		char metal[5];
		char nonmetal[5];
		char metalloid[5];
		char type[20];
		char rad[5];
		char en[5];
		char ion[10];
		char den[10];
		char mp[10];
		char bp[10];
		char iso[3];
		char dis[20];
		char year[4];
		char heat[7];
		char shell[2];
		char valence[2];
	    }elements;
elements atom;
int i;
void newScreen();
int main();
void clrscr();
void quit();
void search();
int byAtNum(FILE *f, char *ele);
void again();
int bySym(FILE *f,char *ele);
int byName(FILE *f,char *ele);

#endif