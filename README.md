![Holberton school image](https://holberton.anahuacmayab.mx/wp-content/uploads/2022/06/Holberton-Logo-v1.png)
# Printf Project

printf is a function used to print character strings that'll return to the terminal output.
This project's purpose is to recreate that very same function but under the name _printf.

## Flowchart



## The main purpose

We're looking to replicate printf()'s `character`, `string` and `integer`'s printing 
functionalities through this _printf function.
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
The output on the terminal will be K

### String

``` 
#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "World");
    return (0);
}
```
The output on the terminal will be Hello, World

### Integer

```
#include "main.h"

int main(void)
{
    _printf("%d\n", 999);
    return (0);
}
```
The output on the terminal will be 999

## Compilation

All of our codes will be compiled on Ubuntu 20.04 LTS with:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
## Man Page

Here is our [manual page](https://github.com/RAY91000/holbertonschool-printf/blob/main/man_3_printf). Feel free to check it out!

# Authors
- [Kérian](https://github.com/Hikarikedo)
- [Ray](https://github.com/RAY91000)
