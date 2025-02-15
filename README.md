# 📝 ft_printf – 42 Project

 <p align="center">
     <img src="https://github.com/mcombeau/mcombeau/blob/main/42_badges/ft_printfe.png" alt="Ft_printf 42 project badge"/>
 </p>

---

## 📝 Overview  
The goal of this project is to recode the `printf()` function from the C standard library. This involves handling various format specifiers and optional flags, as well as managing variable arguments using `va_list`.  

This project is a great opportunity to deepen your understanding of:  
- **Variable arguments** (`va_list`, `va_start`, `va_arg`, `va_end`).  
- **String formatting** and output manipulation.  
- **Custom library creation** (creating `libftprintf.a`).  

---

## 📂 Project Structure  
```
├── Makefile
├── ft_printf.c
├── ft_printf.h
├── ft_putchar.c
├── ft_puthex.c
├── ft_putnbr.c
├── ft_putp.c
├── ft_putstr.c
├── ft_putu.c
├── ft_strlen.c
├── bonus/
│ ├── ft_printf_bonus.c
│ ├── ft_printf_bonus.h
│ ├── ft_putchar_bonus.c
│ ├── ft_puthex_bonus.c
│ ├── ft_putnbr_bonus.c
│ ├── ft_putp_bonus.c
│ ├── ft_putstr_bonus.c
│ ├── ft_putu_bonus.c
│ ├── ft_strlen_bonus.c
```

---

## ⚙️ Installation & Usage

### 🔧 Compilation
To compile the mandatory part:
```bash
make
```
To compile the bonus part:

```bash
make bonus
```
This will generate the libftprintf.a library.

## 🛠 Features

### Mandatory Part
✅ Recodes the `printf()` function with the following conversions:
- `%c` – Prints a single character.
- `%s` – Prints a string.
- `%p` – Prints a pointer address in hexadecimal format.
- `%d` – Prints a decimal (base 10) number.
- `%i` – Prints an integer in base 10.
- `%u` – Prints an unsigned decimal (base 10) number.
- `%x` – Prints a number in hexadecimal (base 16) lowercase format.
- `%X` – Prints a number in hexadecimal (base 16) uppercase format.
- `%%` – Prints a percent sign.

### Bonus Part
✨ **Additional Flags**: Handles the following flags for all conversions:
- `#` – Alternate form (e.g., `0x` for hexadecimal).
- `+` – Always show the sign for numbers.
- ` ` (space) – Prefix a space for positive numbers.

---

## 🚀 Example Usage
```c
#include "ft_printf.h"

int main(void) {
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Number: %d\n", 42);
    ft_printf("Pointer: %p\n", &main);
    ft_printf("Hex: %#x\n", 255);
    ft_printf("Unsigned: %u\n", 12345);
    return 0;
}
```
## 📜 Allowed Functions
- `malloc`
- `free`
- `write`
- `va_start`
- `va_arg`
- `va_copy`
- `va_end`

---

## 📚 Resources
- [printf Documentation](https://man7.org/linux/man-pages/man3/printf.3.html) – Official documentation for `printf`.
- [Variable Arguments in C](https://www.geeksforgeeks.org/variadic-functions-in-c/) – GNU C Library documentation on variadic functions.

---

## 📝 Author
👨‍💻 **Aarab Ayoub**  
📧 [ayoubaarab570@gmail.com](mailto:ayoubaarab570@gmail.com)  
🔗 [GitHub Profile](https://github.com/aarab-ayoub)  

---

## 🎉 Acknowledgments
- Thanks to **42 School** for providing this challenging and educational project.
- Special thanks to peers and mentors for their support and feedback during the development process.
