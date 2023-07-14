#include <stdio.h>
/**
 * main - excution programm
 *
 * Return: always zero
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet  <= 'z')
	putchar(alphabet);
	alphabet++;
	putchar('\n');

	return (0);
}
