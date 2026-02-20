# 🧵 **C Basics — Expanded Cheat‑Sheet for Python Programmers**

## 📦 Common C Types (Primitive + Standard Library)

### **Integer Types**

| Type | Typical Size | Signed? | Notes |
|------|--------------|---------|-------|
| `char` | 1 byte | usually signed | Also used for text; holds small integers. |
| `unsigned char` | 1 byte | no | Useful for raw bytes. |
| `short` / `short int` | 2 bytes | yes | |
| `unsigned short` | 2 bytes | no | |
| `int` | 4 bytes | yes | Most common integer type. |
| `unsigned int` | 4 bytes | no | |
| `long` | 4 or 8 bytes | yes | Platform‑dependent. |
| `unsigned long` | 4 or 8 bytes | no | |
| `long long` | 8 bytes | yes | Guaranteed ≥ 64 bits. |
| `uint32_t`, `int64_t`, etc. | exact | yes/no | From `stdint.h`, portable sizes. |

### **Floating‑Point Types**

| Type | Size | Notes |
|------|------|-------|
| `float` | 4 bytes | ~6 decimal digits precision |
| `double` | 8 bytes | ~15 digits precision |
| `long double` | 16 bytes (platform‑dependent) | Higher precision |

### **Other Useful Types**

| Type | From | Notes |
|------|------|-------|
| `size_t` | `<stddef.h>` | Unsigned type for sizes, array lengths. |
| `ptrdiff_t` | `<stddef.h>` | Signed difference between pointers. |
| `bool` | `<stdbool.h>` | `true` / `false` (C99). |
| `FILE` | `<stdio.h>` | File handle type. |
| `void` | built‑in | Means “no value” or “generic pointer”. |

---

## 🧠 Memory Model Essentials (Python → C mindset shift)

### **1. Variables live in different memory regions**

- **Stack**: local variables, function parameters  
- **Heap**: dynamically allocated memory (`malloc`, `calloc`, `realloc`, `free`)
- **Static/Global**: global variables, `static` locals  
- **Text segment**: compiled code

### **2. C does NOT initialize memory for you**

```c
int x;      // uninitialized → garbage value
int y = 0;  // initialized
```

### **3. Arrays decay to pointers**

```c
int a[5];
int *p = a;   // OK: array → pointer to first element
```

### **4. Strings are arrays of `char` ending in `'\0'`**

```c
char s[] = "hello";  // 6 bytes: h e l l o \0
```

---

## 🔧 Operators and Gotchas

### **Arithmetic**

- `/` between integers → integer division  
- `%` → remainder  
- `++i` vs `i++` → pre/post increment

### **Comparison**

- `==` equality  
- `=` assignment (common beginner bug)

### **Logical**

- `&&` AND  
- `||` OR  
- `!` NOT

### **Pointer Operators**

- `&x` → address of `x`  
- `*p` → value pointed to by `p`  
- `p + 1` → pointer arithmetic (moves by size of type)

### **Struct Access**

```c
p.x      // struct
p->x     // pointer to struct
```

---

## 📚 Common `#include`s (expanded)

### Standard headers you’ll use often

- `<stdio.h>` — I/O  
- `<stdlib.h>` — memory, conversions, random  
- `<string.h>` — string/memory utilities  
- `<math.h>` — math functions (`-lm` required)  
- `<stdbool.h>` — booleans  
- `<stdint.h>` — fixed‑width integers  
- `<ctype.h>` — character classification (`isdigit`, `toupper`)  
- `<assert.h>` — debugging assertions  
- `<time.h>` — timestamps, timers  
- `<errno.h>` — error codes for system calls  
- `<limits.h>` — integer limits  
- `<float.h>` — floating‑point limits  

---

## 🖨️ Format Specifiers (expanded)

### **Integer Types**

| Type | printf | scanf |
|------|--------|--------|
| `int` | `%d` | `%d` |
| `unsigned int` | `%u` | `%u` |
| `long` | `%ld` | `%ld` |
| `unsigned long` | `%lu` | `%lu` |
| `long long` | `%lld` | `%lld` |
| `uint32_t` | `%u` or PRIu32 | `%u` |
| `size_t` | `%zu` | `%zu` |

### **Floating‑Point**

| Type | printf | scanf |
|------|--------|--------|
| `float` | `%f` | `%f` |
| `double` | `%f` | `%lf` |
| `long double` | `%Lf` | `%Lf` |

### **Other**

| Type | printf |
|------|--------|
| `char` | `%c` |
| `char*` | `%s` |
| pointer | `%p` |

---

## 🧱 Structs, Typedefs, and Enums

### **Struct**

```c
struct Point {
    int x;
    int y;
};
```

### **Typedef**

```c
typedef struct {
    int x, y;
} Point;
```

### **Enum**

```c
enum Color { RED, GREEN, BLUE };
```

---

## 🧪 **Useful Compile Commands (with explanations)**

### **Standard build**

```bash
gcc -Wall -Wextra -Werror -Wno-unused-result -std=c11 -lm file.c -o output
```

**Flags explained:**

- **-Wall** — enable common warnings  
- **-Wextra** — enable additional useful warnings  
- **-Werror** — treat warnings as errors  
- **-Wno-unused-result** — suppress warnings about ignored return values (optional)  
- **-std=c11** — compile using the C11 standard  
- **-lm** — link the math library (required for `math.h`)  
- **file.c** — your source file  
- **-o output** — name of the executable  

---

### **Add debugging support**

```bash
gcc -g -Wall -Wextra -std=c11 file.c -o output
```

**-g** embeds debug symbols so you can use tools like `gdb` or IDE debuggers.

---

## 🧰 **Extra Tips for Beginners**

- **Always check return values** of functions like `malloc`, `calloc`, `realloc`, `fopen`, `fwrite`, `scanf`, etc.  
  C will not protect you from errors — you must detect them.

- **Use `valgrind`** to detect memory leaks and invalid memory accesses:  

  ```bash
  valgrind ./output
  ```

- **Prefer `fgets` over `gets`**.  
  `gets` was removed from the C standard because it is unsafe.  
  `fgets` lets you specify a buffer size.

- **Use `const` whenever possible.**  
  It prevents accidental modification and helps the compiler optimize.

- **Avoid global variables** unless you have a very good reason.  
  They make code harder to reason about and test.

- **C has no exceptions.**  
  You must check errors manually and handle them explicitly.

- **Initialize your variables.**  
  Uninitialized variables contain garbage values.

- **Free what you allocate.**  
  Every `malloc`/`calloc`/`realloc` must eventually have a matching `free`.

- **Be careful with array bounds.**  
  C does not check them — writing past the end of an array causes undefined behavior.

- **Use `sizeof` correctly.**  
  Prefer:

  ```c
  malloc(n * sizeof *ptr);
  ```

  instead of:

  ```c
  malloc(n * sizeof(int));
  ```

  This avoids mistakes when changing types.

- **Prefer `strtol` over `atoi`.**  
  `strtol` detects errors; `atoi` does not.

- **Use tools to help you.**  
  - `gdb` for debugging  
  - `valgrind` for memory issues  
  - `clang-tidy` or `cppcheck` for static analysis  
