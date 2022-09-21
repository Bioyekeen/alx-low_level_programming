/*
 * File: 4-print_rev.c
 * Auth: Brennan D Baraban
 */

#include <studio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int len = string(s);

	while (len--)
			putchar(*(s + len));
	putchar(10);
}

