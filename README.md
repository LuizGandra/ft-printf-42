# ft_printf - A Simplified printf Implementation

ft_printf is a project from the [42 São Paulo](https://www.42sp.org.br/) Common Core curriculum. It recreates a simplified version of the C standard library’s `printf()` function, leveraging variadic arguments to handle diverse format specifiers.

![42 São Paulo](https://img.shields.io/badge/42-São_Paulo-black?style=flat-square&logo=42)

## About 42

[42 São Paulo](https://www.42sp.org.br/) is a tuition-free, global coding school focused on peer-to-peer learning and project-based education. This project enhances C programming skills by implementing a versatile, extensible function.

## Project Overview

ft_printf delivers a library (`libftprintf.a`) containing the `ft_printf()` function, which mimics the original `printf()`. It’s split into two parts:
- **Mandatory Part**: Handles basic conversions (`cspdiuxX%`).
- **Bonus Part**: Adds support for additional formatting flags.

### Key Features

- Supports specifiers: `%c` (char), `%s` (string), `%p` (pointer), `%d` (decimal), `%i` (integer), `%u` (unsigned), `%x`/`%X` (hex lowercase/uppercase), `%%` (percent).
- Uses variadic arguments for flexible input handling.
- Bonus includes:
  - [x] Management of flags `#`, `+`, and space (implemented).
  - [ ] Management of flags `-0.` with minimum field width (not implemented).
- Produces output identical to the standard `printf()` for supported features.

### Restrictions

- Written in C, compliant with the 42 Norm.
- No unexpected crashes (e.g., segmentation faults).
- No memory leaks from heap allocations.
- Compiled with `-Wall -Wextra -Werror`.
- No buffer management from the original `printf()`.

## Getting Started

### Prerequisites

- C compiler (e.g., `clang`).
- `make` utility.

### How to Build and Run

1. Clone the repository:

   ```bash
   git clone https://github.com/LuizGandra/ft-printf-42.git
   cd ft-printf-42

2. Build the mandatory part:

   ```bash
   make

3. Build the bonus part (optional):

   ```bash
   make bonus

4. Link the library to a C project:

   ```bash
   clang -o program program.c -L<libftprintf.a directory> -lftprintf

#### Additional commands

- `make clean`: remove object files.
- `make fclean`: remove `libft.a` and object files.
- `make re`: rebuild everything.

## Project Structure

- `ft_printf.h`: header with function prototype.
- `ft_printf.c`: core logic for ft_printf().
- `ft_putaddress.c`: logic for printing pointers.
- `ft_putchar.c`: logic for printing characters.
- `ft_puthex.c`: logic for hexadecimal output.
- `ft_putnbr.c`: logic for integers (signed/unsigned).
- `ft_putstr.c`: logic for strings.
- `utils.c`: auxiliary functions.
- `Bonus files (e.g., ft_printf_bonus.c)`: additional flag support.
- `Makefile`: compilation automation.

## License

This project is part of the 42 curriculum and intended for educational use.
