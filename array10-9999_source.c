/*
	Author: Peter Szathmary
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
	srand(time(0));
	char answer;


	// array with 20 elements
	int arr[20];
	// 20 random numbers from 10 - 9999
	int i;
	printf("Random numbers from 10-9999:\n");
	for (i = 0; i<20; i++)
	{
		arr[i] = rand() % 9989 + 10;
		printf("-  %d  -\n", arr[i]);
	}
	// how much is even numbers and how much odd
	int evenN = 0;
	int oddN = 0;
	for (i = 0; i<20; i++)
	{
		if (arr[i] % 2 == 0)
		{
			evenN++;
		}
		else
		{
			oddN++;
		}
	}
	// print even numbers
	printf("There are %d even number:\n", evenN);
	for (i = 0; i<20; i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf("-  %d  -\n", arr[i]);
		}
	}
	// print odd numbers
	printf("There are %d odd number:\n", oddN);
	for (i = 0; i<20; i++)
	{
		if (arr[i] % 2 != 0)
		{
			printf("-  %d  -\n", arr[i]);
		}
	}
	// how much 2, 3 and 4 digits numbers
	int twoDig = 0; // i was trying to use "int twoDig, threeDig, fourDig=0;" but it didn't work
	int threeDig = 0;
	int fourDig = 0;
	for (i = 0; i<20; i++)
	{
		if (arr[i] >= 10 && arr[i] <= 99)
		{
			twoDig++;
		}
		else if (arr[i] >= 100 && arr[i] <= 999)
		{
			threeDig++;
		}
		else if (arr[i] >= 1000 && arr[i] <= 9999)
		{
			fourDig++;
		}
	}
	// print 2, 3 and 4 digits numbers
	if (twoDig>0)
	{
		printf("There are (%d) two digits numbers:\n", twoDig);
		for (i = 0; i<20; i++)
		{
			if (arr[i] >= 10 && arr[i] <= 99)
			{
				printf("-  %d  -\n", arr[i]);
			}
		}
	}
	if (threeDig>0)
	{
		printf("There are (%d) three digits numbers:\n", threeDig);
		for (i = 0; i<20; i++)
		{
			if (arr[i] >= 100 && arr[i] <= 999)
			{
				printf("-  %d  -\n", arr[i]);
			}
		}
	}
	if (fourDig>0)
	{
		printf("There are (%d) four digits numbers:\n", fourDig);
		for (i = 0; i<20; i++)
		{
			if (arr[i] >= 1000 && arr[i] <= 9999)
			{
				printf("-  %d  -\n", arr[i]);
			}
		}
	}
	// the smallest and the largest number
	int max = arr[0];
	int min = arr[0];
	for (i = 0; i<20; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
		else if (arr[i]<min)
		{
			min = arr[i];
		}
	}
	// print smallest and largest number
	printf("The smallest number is: %d\n", min);
	printf("The largest number is: %d\n", max);
	// array backwards
	printf("Array backwards:\n");
	for (i = 19; i >= 0; i--)
	{
		printf("-  %d  -\n", arr[i]);
	}
	// print all numbers which are palindromes
	// i am reading digits from right to left
	int firstDig;
	int secondDig;
	int thirdDig;
	int fourthDig;
	int palindromes2 = 0;
	int palindromes3 = 0;
	int palindromes4 = 0;
	if (twoDig>0)
	{
		for (i = 0; i<20; i++)
		{
			if (arr[i] >= 10 && arr[i] <= 99)
			{
				firstDig = arr[i] % 10;
				secondDig = arr[i] / 10;
				if (firstDig == secondDig)
				{
					palindromes2++;
				}
			}
		}
	}
	if (palindromes2>0)
	{
		printf("Palindromes with 2 digits:\n");
		for (i = 0; i<20; i++)
		{
			if (arr[i] >= 10 && arr[i] <= 99)
			{
				firstDig = arr[i] % 10;
				secondDig = arr[i] / 10;
				if (firstDig == secondDig)
				{
					printf("-  %d  -\n", arr[i]);
				}
			}
		}
	}
	if (threeDig>0)
	{
		for (i = 0; i<20; i++)
		{
			if (arr[i] >= 100 && arr[i] <= 999)
			{
				firstDig = arr[i] % 10;
				thirdDig = arr[i] / 100;
				if (firstDig == thirdDig)
				{
					palindromes3++;
				}
			}
		}
	}
	if (palindromes3>0)
	{
		printf("Palindromes with 3 digits:\n");
		for (i = 0; i<20; i++)
		{
			if (arr[i] >= 100 && arr[i] <= 999)
			{
				firstDig = arr[i] % 10;
				thirdDig = arr[i] / 100;
				if (firstDig == thirdDig)
				{
					printf("-  %d  -\n", arr[i]);
				}
			}
		}
	}
	if (fourDig>0)
	{
		for (i = 0; i<20; i++)
		{
			if (arr[i] >= 1000 && arr[i] <= 9999)
			{
				firstDig = arr[i] % 10;
				secondDig = arr[i] / 10;
				thirdDig = arr[i] / 100;
				fourthDig = arr[i] / 1000;
				if (firstDig == fourthDig && secondDig == thirdDig)
				{
					palindromes4++;
				}
			}
		}
	}
	if (palindromes4>0)
	{
		printf("Palindromes with 4 digits:\n");
		for (i = 0; i<20; i++)
		{
			if (arr[i] >= 1000 && arr[i] <= 9999)
			{
				firstDig = arr[i] % 10;
				secondDig = arr[i] / 10;
				thirdDig = arr[i] / 100;
				fourthDig = arr[i] / 1000;
				if (firstDig == fourthDig && secondDig == thirdDig)
				{
					printf("-  %d  -\n", arr[i]);
				}
			}
		}
	}
	// how many numbers can be divided by 7
	int dividedBy7 = 0;
	for (i = 0; i<20; i++)
	{
		if (arr[i] % 7 == 0)
		{
			dividedBy7++;
		}
	}
	printf("Do you wanna know what numbers are divided by 7? Enter 'y' for YES or 'n' for NO: ");
	scanf("%c", &answer);
	getchar();
	if (answer == 121)
	{
		if (dividedBy7 > 0)
		{
			printf("Numbers divided by 7:\n");
			for (i = 0; i < 20; i++)
			{
				if (arr[i] % 7 == 0)
				{
					printf("-  %d  -\n", arr[i]);
				}
			}
		}
		else if (dividedBy7 == 0)
		{
			printf("There are no numbers divided by - 7\n");
		}
	}
	else if (answer == 110)
	{
		printf("You chose NO..\n");
	}
	else
	{
		printf("You didn't enter correct letter!\n");
	}
	return 0;
}