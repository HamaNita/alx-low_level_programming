#include <unstdio.h>

/**
 * This is my _putchar.c
 */

int _putchar(char c)
{
	return write(STDOUT,_FILENO, &C, 1);
}
