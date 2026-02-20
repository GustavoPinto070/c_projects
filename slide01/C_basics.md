**C Basics**

A short starter cheat-sheet for beginners coming from Python. Covers common `#include`s, printf/scanf format specifiers, comments, and a recommended compile command with flag explanations.

**Includes:**
- `stdio.h`: input/output functions (`printf`, `scanf`, `fopen`, `FILE`, `fclose`).
- `stdlib.h`: utilities (`malloc`, `free`, `exit`, `strtol`, `atoi`, `qsort`).
- `string.h`: string helpers (`strlen`, `strcpy`, `strcat`, `strcmp`, `memcpy`, `memset`).
- `math.h`: math functions (`sin`, `cos`, `pow`, `sqrt`) — remember to link with `-lm`.
- `stdbool.h`: `bool`, `true`, `false` (C99+).
- `stdint.h`: fixed-width integer types (`int32_t`, `uint64_t`) for portability.

**Common printf/scanf format specifiers (basic):**
- `%d` : signed `int` (printf/scanf for `int`: `printf("%d", i)`, `scanf("%d", &i)`).
- `%ld` : signed `long`.
- `%u` : unsigned `int`.
- `%f` : floating-point (`printf` expects a `double`; for `scanf`, `%f` reads a `float` and `%lf` reads a `double`).
- `%c` : single character.
- `%s` : NUL-terminated C string (array of `char`).
- `%p` : pointer (prints an address).
- `%x` / `%X` : hexadecimal (unsigned).
- `%o` : octal.
- `%zu` : `size_t` (useful for `sizeof` or container sizes).

Tip: To print a literal percent sign, use `%%` in the format string.

**Comments:**
- Single-line: `// this is a comment`
- Multi-line: `/* this is a
   multi-line comment */`

**Recommended simple compile command and what each part does:**

```bash
gcc -Wall -Wextra -Werror -Wno-unused-result -std=c11 -lm /path/to/file.c -o output_name
```

- `gcc`: GNU C compiler.
- `-Wall`: enable common warnings (good to show problems early).
- `-Wextra`: enable additional useful warnings.
- `-Werror`: treat all warnings as errors (forces you to fix warnings).
- `-Wno-unused-result`: disable warnings about ignoring return values (optional).
- `-std=c11`: compile using the C11 standard (you can change to `c99` or `gnu11`).
- `-lm`: link the math library (required if you use functions from `math.h`).
- `/path/to/file.c`: your source file.
- `-o output_name`: name of the generated executable.

Example adapted for the factorial example in this repo:

```bash
gcc -Wall -Wextra -Werror -Wno-unused-result -std=c11 -lm /home/utilizador/slides_iaed/slide1/factorial/factorial.c -o factorial.out
./factorial.out 5
```

**Extra tips for beginners:**
- Use `strtol` (from `stdlib.h`) instead of `atoi` for safer number parsing — it reports conversion errors.
- For debugging add `-g` to the compile flags and run with `gdb ./output_name` or use an IDE debugger.
- For runtime checks use `valgrind ./output_name` (helps find memory leaks/invalid accesses).
- Recursion: computing factorial recursively is fine for small `n`, but large `n` can overflow the stack or the integer type. Consider iterative solutions or big-integer libraries for large factorials.
- If you see a warning, read it and fix the code — warnings often point to real bugs.

Feel free to ask for a version tailored to your operating system, build system, or to add examples for `scanf`, `malloc`/`free`, and simple Makefile rules.
