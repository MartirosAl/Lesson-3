#include "Euler.h"
unsigned long long Problem_4()
{
	int max_number = 1000;
	int max_palindrom = 0;
	for (int x = 100; x < max_number; x++)
	{
		for (int y = 100; y < max_number; y++)
			if (IsPalindrome(x * y) && x * y > max_palindrom)
				max_palindrom = x * y;
	}
	return max_palindrom;
}

unsigned long long Problem_5(const int number_)
{
	long long smallest_multiple = 0;
	int counter = 0;
	while (1)
	{
		for (int a = 1; a <= number_; a++)
		{
			if (smallest_multiple % a == 0)
				counter++;
			else
				break;
		}
		if (counter == number_)
			break;

		smallest_multiple++;
		counter = 0;
	}
	return smallest_multiple;
}

