#include <unistd.h>

/*
 * Write a program that prints _putchar
 *
 * Return: always 0 
 */

void _putchar(char c)
{
	return write(1, &c, 1);
}
int main (void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return 0;

}
