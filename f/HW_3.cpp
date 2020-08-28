#include<stdio.h>
int main() {
	int row, i, j;
	printf("Enter the number of layers : ");
	scanf_s("%d", &row);
	for (i = 1;row >= i;i++)
	{
		for (j = 1;i >= j;j++)
		{
			if (i == j || i == row)
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}