#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 /**
  * main - Print alphabet
  *
  * Return: Always 0 (success)
  */

int main(void)
{
	char low;

	for  (low = 'a'; low <= 'z'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
