# ft_printf

**Because `ft_putnbr()` and `ft_putstr()` aren’t enough**

## Overview

This project involves recreating the standard C library function `printf()`. By implementing this, you will gain a deeper understanding of variadic functions and structured programming in C.

## Features

### Mandatory Part
The `ft_printf` function supports the following conversions:
- `%c` : Print a single character.
- `%s` : Print a string.
- `%p` : Print a pointer address in hexadecimal format.
- `%d` : Print a decimal integer.
- `%i` : Print an integer in base 10.
- `%u` : Print an unsigned decimal integer.
- `%x` : Print a hexadecimal number (lowercase).
- `%X` : Print a hexadecimal number (uppercase).
- `%%` : Print a literal percent sign.

### Bonus Part
Optional features include:
- Support for flags: `-0.` and field minimum width for all conversions.
- Support for flags: `# +` (including space).

## Requirements

- Written in C.
- Allowed functions: `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`.
- Norm-compliant (42 coding standard).
- Must manage memory efficiently (no leaks).
- Includes a `Makefile` with the following rules:
  - `all`: Compile the library `libftprintf.a`.
  - `clean`: Remove object files.
  - `fclean`: Remove object files and the compiled library.
  - `re`: Recompile the entire project.
  - `bonus`: Compile with bonus features.

## Usage

1. Clone the repository and navigate to the project folder.
2. Run `make` to compile the library:
   ```bash
   make
