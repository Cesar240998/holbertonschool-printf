#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct validates - Contain and call the function to print
 * @flag: A flag to validate if exist a special char (%?).
 * @print: function to print something.
 */

typedef struct validates
{
        int flag;
        int (*print)(va_list args);
} validates_t;

int print_int(va_list args);
void print_number(int n);
int count_digit(int i);
int _printf(const char *format, ...);
validates_t ch_option(char s);
int print_string(va_list args);
int print_char(va_list args);
int print_percent(va_list args __attribute__((unused)));

int _putchar(char c);

/**
 * struct specifiers - gives the specifiers with their funcs
 * @op: A char with some option
 * @oper: Pointer to the function that go to print
 */

typedef struct specifiers
{
        int op;
        int (*oper)(va_list args);
} specifiers_t;

#endif
