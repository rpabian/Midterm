/*
 * midterm.c
 *
 *  Created on: Mar 12, 2019
 *      Author: itopa
 */
#include <stdio.h>


void main()
{
	int tableSize = 0;

	printf("Multiplication Table!\n");
	printf("Enter the size of the Multiplication table: ");
	fflush(stdout);
	scanf("%d", &tableSize);
	printf("\n");

	int table[tableSize][tableSize];

	for(int i = 1; i <= tableSize; i++)
		for(int j = 1; j <= tableSize; j++)
			table[i - 1][j - 1] = i * j;

	for(int i = 0; i < tableSize + 1; i++)
		for(int j = 0; j < tableSize + 1; j++)
		{
			if(i == 0 && j == 0)
				printf("    ");
			else if(i == 0)
			{
				printf("%4d", j);
				if(j == tableSize)
					printf("\n");
			}
			else if(j == 0)
				printf("%4d", i);
			else
			{
				printf("%4d", table[i - 1][j - 1]);
				if(j == tableSize)
					printf("\n");
			}
		}
}

