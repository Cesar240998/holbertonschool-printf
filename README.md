# _printf
```_printf``` is a custom implementation of the C programming function ```printf```. This project is an application of the C programming knowledge that [Holberton School](https://www.holbertonschool.com/) Cohort18 students have learned since starting the program on May, 2022.

**Prototype:** ```int _printf(const char *, ...);```

## Examples
**String**
* Input: ```_printf("%s\n", 'This is a string.');```
* Output: ```This is a string.```

**Character**
* Input: ```_printf("The first letter in the alphabet is %c\n", 'A');```
* Output: ```The first letter in the alphabet is A```

**Integer**
* Input: ```_printf("There are %i dozens in a gross\n", 12);```
* Output: ```There are 12 dozens in a gross```

**Decimal:**
* Input: ```_printf("%d\n", 1000);```
* Output:  ```1000```
## Project Requirements
* All files will be compiled on Ubuntu 14.04 LTS
* Programs and functions will be compiled with gcc 4.8.4 using flags -Wall -Werror -Wextra and -pedantic
* Code must follow the [Betty](https://github.com/holbertonschool/Betty/wiki) style
* Global variables are not allowed
* Authorized functions and macros:
  * ```write``` (man 2 write)
  * ```malloc``` (man 3 malloc)
  * ```free``` (man 3 free)
  * ```va_start``` (man 3 va_start)
  * ```va_end``` (man 3 va_end)
  * ```va_copy``` (man 3 va_copy)
  * ```va_arg``` (man 3 va_arg)
## Mandatory Tasks
- [x] Write function that produces output with conversion specifiers ```c```, ```s```, and ```%```.
- [x] Handle conversion specifiers ```d```, ```i```.
- [x] Create a man page for your function.
## File Descriptors
* **write_functions.c:** - contains the function ```_putchar```, which writes a character to stdout.
* **main.h:** - contains all function prototypes used for ```_printf```.
* **man_3_printf:** - manual page for the custom ```_printf``` function.
* **print_alpha.c:** - contains the functions to handle the conversion specifiers ```c```, ```s```, and ```%```.
* **print_nums.c:** - contains the functions to handle the conversion specifiers ```i``` and ```d```.
* **get_print.c:** - contains the specifiers with their functions. 
## Authors
[Cesar Evanan](https://github.com/Cesar240998)

