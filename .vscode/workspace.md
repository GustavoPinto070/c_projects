# Workspace README

This folder contains a C development environment for **WSL** using **GCC**. It is configured to build, run, and debug C files using the standard GNU toolchain.

### **Quick Overview**

* **Build & Debug (`F5`)**: Compiles the active `.c` file using GCC and starts a debugging session. It automatically triggers the `Build current file` task before starting.
* **Run (no debug) (`Ctrl+F5`)**: Runs the compiled `.out` file directly without the debugger.
* **Task Picker (`Ctrl+Shift+B`)**:
* **Build current file**: Compiles the active file into an executable with the `.out` extension.
* **Build all C files in folder**: Compiles every `.c` file in the current directory into a single `all_c_programs.out`.



### **Files to check**

* **[.vscode/tasks.json](https://www.google.com/search?q=.vscode/tasks.json)**: Contains the GCC compiler flags: `-Wall`, `-Wextra`, `-Werror` (warnings as errors), and `-lm` (math library).
* **[.vscode/launch.json](https://www.google.com/search?q=.vscode/launch.json)**: Configures the **GDB** debugger settings for WSL.
* **[.vscode/settings.json](https://www.google.com/search?q=.vscode/settings.json)**: General workspace preferences, including file exclusions for binaries.
* **[.vscode/c_cpp_properties.json](https://www.google.com/search?q=.vscode/c_cpp_properties.json)**: Configures IntelliSense to use the Linux GCC system headers.

### **Manual Terminal Commands**

If you prefer using the terminal over VS Code shortcuts:

**Compile and run a specific file:**

```bash
gcc -Wall -Wextra -Werror -std=c11 -lm main.c -o main.out
./main.out

```

**Compile all files in the current folder:**

```bash
gcc -Wall -Wextra -Werror -std=c11 -lm *.c -o all_c_programs.out

```

### **Required VS Code Extensions**

To ensure IntelliSense and Debugging work correctly in WSL:

* **C/C++** (by Microsoft): Provides the engine for code completion and debugging.

### **Notes**

* **Binary Hiding**: To keep the file explorer clean, `.out` and `.o` files are hidden from view. You can see them by running `ls` in the terminal.
* **Strict Compilation**: This workspace uses `-Werror`, meaning the code will **not compile** if there are any warnings. This is to ensure high code quality.
