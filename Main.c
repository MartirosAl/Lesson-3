#include <stdio.h>
int main()
{
	int max_number = 1000;
	int max_palindrom = 0;
	for (int x = 100; x < max_number; x++)
	{
		for (int y = 100; y < max_number; y++)
			if (IsPalindrome(x * y) && x*y>max_palindrom)
				max_palindrom = x * y;
	}
	printf("The most bigest palindrom: %d", max_palindrom);


}