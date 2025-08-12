# ft_printf – Custom Implementation of `printf` 🖨️

This project is a recreation of the standard C library function `printf()`.  
It works like the original `printf()` but only supports a few format specifiers.
The goal was to learn how to handle **formatted output**, use **variadic functions**, and print different types of data in C. 

---

## 📜 Implemented Conversions (Mandatory Part)

- **`%c`** – Prints a single character.  
- **`%s`** – Prints a string (null-terminated, following the standard C convention).  
- **`%p`** – Prints a pointer (`void *`) in hexadecimal format with a `0x` prefix.  
- **`%d`** – Prints a signed decimal (base 10) integer.  
- **`%i`** – Prints a signed decimal (base 10) integer (same as `%d`).  
- **`%u`** – Prints an unsigned decimal (base 10) integer.  
- **`%x`** – Prints an unsigned number in hexadecimal (base 16) **lowercase** format.  
- **`%X`** – Prints an unsigned number in hexadecimal (base 16) **uppercase** format.  
- **`%%`** – Prints a literal percent sign (`%`).  

---

## 🔍 Notes

- ⚠️ This is **not** a full replacement for the original `printf()` — only the above conversions are supported.  
- 🛠️ The implementation avoids using most standard library functions (only allowed ones by the 42 project rules).  
- 📦 Handles variadic arguments using `va_list` from `<stdarg.h>`.  

---
