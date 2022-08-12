#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <sys/types.h>
#include <string.h>
#include <unistd.h>

/**
 * struct special_chars - Validate the special char (%?)
 *
 * @op: A char with some option
 *
 * @operation: Pointer to the function that go to print
 */

typedef struct special_chars
{
	int op;
	int (*operation)(va_list args);
} special_chars_t;

/**
 * struct print_operation - Contain and call the function to print
 *
 * @flag: A flag to validate if exist a special char (%?).
 *
 * @print: function to print something.
 */

typedef struct print_operation
{
	int flag;
	int (*print)(va_list args);
} operation_t;

int print_int(va_list args);
void print_number(int n);
int count_digit(int i);
int _printf(const char *format, ...);
operation_t ch_option(char s);
int print_string(va_list args);
int print_char(va_list args);

int _putchar(char c);

#endif
