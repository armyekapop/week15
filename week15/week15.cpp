#include<stdio.h>
void change(int *num1, int *count);

int main()
{
	int num1[99];
	int num2[99];
	int count1 = 0;
	int count2 = 0;
	
	printf("size array 1 : ");
	scanf_s("%d", &count1);
	printf("array 1 : ");
	for (int i = 0; i < count1; i++)
	{
		scanf_s("%d", &num1[i]);
	}
	printf("\nsize array 2 : ");
	scanf_s("%d", &count2);
	printf("array 2 : ");
	for (int i = 0; i < count2; i++)
	{
		scanf_s("%d", &num2[i]);
	}
	
	change(num1, &count1);
	change(num2, &count2);
	printf("\n\narray intersection : ");
	for (int j = 0; j < count1; j++)
	{
		for (int q = 0; q < count2; q++)
		{
			if (num1[j] == num2[q])
			{
				printf("%d ", num1[j]);
			}
		}
	}
	printf("\n\n");
	
	return 0;
}

void change(int *num1,int *count)
{
	int test[99];
	
	int k = 0;
	for (int i = 0; i < *count; i++)
	{
		
		int check = 0;

		for (int j = i; j >= 0; j--)
		{
			if (num1[i] == num1[j] && j != i)
			{
				check++;
			}
		}
		if (check == 0)
		{
			test[k] = num1[i];
			k++;
		}
	}
	for (int y = 0; y <= k; y++)
	{
		num1[y] = test[y];
	}
	*count = k;
}