#include <unistd.h>
/**
 * _putchar - makes the c character in stdout
 * c: the character that will be printed
 * Return: On success 1.
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return(write(1,&c,1));
}
