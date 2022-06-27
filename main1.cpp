#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include "task1.h"


int main()
 {
	char buf[255] = {};
	
	printf("Enter your string: ");
	gets_s(buf);

	printf("Count of words = %d", wordcount(buf));

	_getch();
	return 0;
}