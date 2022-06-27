#include "task1.h"

int wordcount(char buf[])
{
	int count = 0;
	short flag = 1;

	for (int i = 0; buf[i] != '\0'; i++) {

		if (buf[i] != ' ' && flag == 1) {
			count++;
			flag = 0;
		}
		else if (buf[i] == ' ') {
			flag = 1;
		}

	}

	return count;
}