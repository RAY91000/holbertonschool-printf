![Holberton school image (1)](https://holberton.anahuacmayab.mx/wp-content/uploads/2022/06/Holberton-Logo-v1.png)
# Printf Project

printf is a function used to print character strings that'll return to the terminal output.
This project's purpose is to recreate that very same function but under the name _printf.
For this project we used multiple libraries:

- `#include "main.h"` This is a user-defined header file. It is usually included when you want to define function prototypes, constants, and other declarations that are specific to your project. 
Purpose: It helps to organize and manage code better by putting function declarations and other necessary includes in one place.

- `#include <stdarg.h>` This header file is used to handle functions that accept a variable number of arguments, commonly known as variadic functions (e.g., printf or custom functions that take a variable number of parameters).

Purpose: It provides macros and definitions to access and handle the variable arguments passed to a function.

Key Macros:

`va_start()`: Initializes a variable argument list.

`va_arg()`: Accesses the next argument in the list.

`va_end()`: Cleans up after the list has been used.

- `#include <limits.h>` This header defines the limits of various types in C (such as int, long, char, etc.), including the minimum and maximum values these types can hold.

Purpose: It is often used to get constant values like the maximum and minimum limits for data types (e.g., INT_MAX, CHAR_MIN, etc.). 

- `#include <stddef>` This header file defines several useful types and macros, such as size_t (for representing sizes of objects), ptrdiff_t (for pointer differences), and NULL (the null pointer constant).

Purpose: It provides type definitions and macros that are commonly used when dealing with memory management, pointer arithmetic, and handling sizes.

Common definitions:

`size_t`: The type used for representing the size of objects.

`ptrdiff_t`: The type used for differences between pointers.

`NULL`: A macro that represents a null pointer.

- `#include <unistd.h>` This header defines functions for low-level input/output operations. It is commonly used in Unix-like operating systems.

Purpose: It provides access to system calls such as reading, writing, and closing files, managing file descriptors, and more.

## Flowchart

![Flowchart image (1)](https://cdn.discordapp.com/attachments/1112152814777544847/1311420238016811018/Logigramme.png?ex=6748cac5&is=67477945&hm=e770cc2c2acfca80023e5646aebc48f50f6e1b149b02ee9b43273001beae213a&)

## The main purpose

We're looking to replicate printf()'s [`character`](https://github.com/RAY91000/holbertonschool-printf/blob/main/char.c), [`string`](https://github.com/RAY91000/holbertonschool-printf/blob/main/string.c) and [`integer`](https://github.com/RAY91000/holbertonschool-printf/blob/main/integer.c)'s printing 
functionalities through this _printf function.

### Common Format Specifiers
Format Type | Specifier | Puropose |
| :---------------: | :---------------: | :---------------: |
| decimal | %d/%i | Used for printing integers (decimal numbers) |
| string | %s | Used for printing null-terminated character strings |
| character | %c | Used for printing single characters |

Here are some examples:

### Character

```
#include "main.h"

int main(void)
{
    _printf("%c\n", 'K');
    return (0);
}
```
`Output`:
```
K
```

### String

``` 
#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "World");
    return (0);
}
```
`Output`: 
```
Hello, World
```

### Integer

```
#include "main.h"

int main(void)
{
    _printf("%d\n", 999);
    return (0);
}
```
`Output`:
```
999
```

## Compilation

All of our codes will be compiled on Ubuntu 20.04 LTS with:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

## Coding style

Here, at Holberton School, we have a specific coding style that makes our codes look clean and easy to read:

Its called the [Betty-style](https://github.com/hs-hq/Betty/blob/main/betty-style.pl). With this we respect numerous spacing and syntaxes which is very useful to improve one's code clarity.

## Man Page

Here is our [manual page](https://github.com/RAY91000/holbertonschool-printf/blob/main/man_3_printf). Feel free to check it out!

# Authors
- [Kérian](https://github.com/Hikarikedo)
- [Ray](https://github.com/RAY91000)
