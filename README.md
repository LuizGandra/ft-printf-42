# ft_printf()
The goal of this project is to implement a simplified version of the **printf()** function from the C Standard Library. It was developed as part of the **Common Core** of [**42 São Paulo**](https://www.42sp.org.br/).

**This function handles the following format specifiers:**
- `%c` to print characters
- `%s` to print strings
- `%p` to set addresses in hexadecimal format
- `%d` to print decimal numbers
- `%i` to print integers in decimal base
- `%u` to print integers in decimal base without sign
- `%x` to print numbers in hexadecimal format in lowercase characters
- `%X` to print numbers in hexadecimal format in uppercase characters
- `%%` to print a percent sign

## How to Test
To compile and run this project, run the `make` command in the terminal.

**Note:** _the project is separated into two parts, the mandatory and the bonus. If you want to compile the project with the bonus, run_ `make bonus`_._

## Project Structure
The project is divided into two parts, the **mandatory** and the **bonus**, which includes the entire original project and more resources.

### Files
- `ft_printf.c` includes the main logic of the project and the printf() function itself
- `ft_putaddress.c` includes the logic needed to print addresses
- `ft_putchar.c` includes the logic needed to print characters
- `ft_puthex.c` includes the logic needed to print hexadecimal values
- `ft_putnbr.c` includes the logic to print integers (signed and unsigned)
- `ft_putstr.c` includes the logic to print strings
- `utils.c` includes auxiliary functions used in other files
- `ft_printf.h` is the header file of the project

## Bonus
The bonus folder includes all the files for this part of the project.

**The bonus has two requirements:**
- [ ] Manage any combination of the `-`, `0` and `.` flags and the minimum field width in all conversions.
- [x] Manage the `#`, ` ` and `+` flags.
