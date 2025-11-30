#                         🖨️ ft_printf — Recreating the Legendary `printf`

![42 School](https://img.shields.io/badge/School-42-black?style=for-the-badge&logo=42)
![Language](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c)
![Score](https://img.shields.io/badge/Project-ft__printf-success?style=for-the-badge)
![Norminette](https://img.shields.io/badge/Norminette-Passing-green?style=for-the-badge)





## 🗣️ About The Project

**ft_printf** is one of the core projects in the 42 Common Core curriculum.  
The aim is to recreate the behavior of the standard C library function **printf**, respecting its functionality and format handling.

This project introduces you to:

- **Variadic functions** (`va_start`, `va_arg`, `va_end`)
- **Format-string parsing**
- **Hexadecimal & pointer formatting**
- **Low-level output with `write()`**

By the end, you produce your own library: `libftprintf.a`.

---

## 🔧 Supported Conversions

Your `ft_printf` must handle the following specifiers:

| Specifier | Meaning |
|----------|---------|
| `%c` | Print a single character |
| `%s` | Print a null-terminated string |
| `%p` | Print a pointer address in hexadecimal with `0x` prefix |
| `%d` | Print a signed integer |
| `%i` | Same as `%d` |
| `%u` | Print an unsigned integer |
| `%x` | Print a number in lowercase hexadecimal |
| `%X` | Print a number in uppercase hexadecimal |
| `%%` | Print a literal `%` |

---

## 🌟 Bonus (Optional)

If you implemented the bonus part, the following flags must work:

| Flag | Description |
|------|-------------|
| `-` | Left-align output |
| `0` | Zero-padding |
| `.` | Precision |
| `#` | Alternative form for hex (`0x`, `0X`) |
| ` ` | Space before positive numbers |
| `+` | Always show sign (+/-) |

---

## 🧠 Technical Concepts

### 📌 Variadic Functions
`ft_printf` relies on `<stdarg.h>`:

- `va_start()` → starts reading the variable arguments  
- `va_arg()` → fetches the next argument  
- `va_end()` → cleans up the list  

This teaches low-level type handling and dynamic argument processing.

### 📌 Output
All printing is done via:

```c
write(1, &c, 1);
````

No buffering or complex I/O allowed.

---

## 🚀 Getting Started

### Clone & Compile

```bash
git clone https://github.com/your-username/ft_printf.git
cd ft_printf
make
```

This generates:

```
libftprintf.a
```

---

## 💻 Usage

### Example `main.c`

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s! Number: %d\n", "World", 42);
    ft_printf("Hex lowercase: %x\n", 255);
    ft_printf("Pointer: %p\n", &main);
    return (0);
}
```

### Compile with the library

```bash
cc main.c libftprintf.a -o my_program
./my_program
```

---

## 🧹 Makefile Commands

| Command       | Description              |
| ------------- | ------------------------ |
| `make`        | Compile the project      |
| `make clean`  | Remove object files      |
| `make fclean` | Remove objects + library |
| `make re`     | Full rebuild             |

---

## 📎 Project Structure (Recommended)

```
📂 ft_printf
├── 📜 ft_printf.h          # Header file
├── 🛠️ Makefile             # Compilation rules
├── 🚀 ft_printf.c          # Main logic
├── 📄 ft_putchar.c         # Char handler
├── 📄 ft_putstr.c          # String handler
├── 📄 ft_putnbr.c          # Integer handler
├── 📄 ft_unsigned.c        # Unsigned int handler
├── 📄 ft_adresse.c         # Pointer address handler (%p)
├── 📄 ft_lowhex.c          # Hexadecimal lowercase   (%x)
├── 📄 ft_upphex.c          # Hexadecimal uppercase   (%X)
├── 📏 ft_strlen.c          # Helper utility
└── 📁 subject              # Project instructions
    └── 📑 en.subject.pdf
```

---


---

> ⚠️ *Respect academic integrity. Do not copy/paste without understanding your code.*
