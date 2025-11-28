# Project `_printf`

##  Objective

Recreate a basic version of `printf` in C, using :

- variadic arguments (`va_list`, `va_start`, `va_arg`, `va_end`)
- a structure (`struct printer`) to associate each specifier (`%c`, `%s`, etc.) to the correct display function.

---

## Requirements 

- Allowed editors: vi, vim, emacs


- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89


- All your files should end with a new line


- A README.md file, at the root of the folder of the project is mandatory


- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl


- You are not allowed to use global variables


- No more than 5 functions per file

- The prototypes of all your functions should be included in your header file called main.h


- Don’t forget to push your header file


- All your header files should be include guarded

- Your code must be easy to read and clear 

- Add useful commentary

- Use simple names for your variables and functions

## Installation & compilation 

If you want to install our project, create a repo in your Github, and use this command

```bash
  git clone https://github.com/AllixRbn/holbertonschool-printf.git
```

Compile with this command 
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

##  Supported features

The `_printf` function handles the following specifiers :

| Specifier    | Description                                | Example of use                              |
|--------------|--------------------------------------------|--------------------------------------------|
| `%c`         | Display a character                        |_printf("Character : %c\n", 'H');           |
| `%s`         | Displays a string of characters            |_printf("String    : %s\n", "Hello");       |
| `%%`         | Show character `%`                         |_printf("Percent  : %%\n");                 |
| `%d`         | Displays a signed integer in base 10       |_printf("Int d  : %d\n", 1234);             |
| `%i`         | Same as `%d`                               |_printf("Int i  : %i\n", -5678);            |

## How to try your program ?

The compiler will rename your file as 'a.out', so you have to run this command 

```bash
  ./a.out
```


## Authors
- [@Alix](https://github.com/AllixRbn)
- [@Benjamin](https://github.com/benji3106)
