# C Project Development Environment (WSL + GCC)

This workspace is optimized for C development using the GNU toolchain within **WSL**.

---

## Workspace Settings

Compiled `.out` binaries and object files are hidden by default to keep the explorer clean. You can toggle this in `.vscode/settings.json`.

### Toggle Binary Visibility

Change the value to `false` if you need to see your executables in the sidebar:

```json
"files.exclude": {
    "**/*.out": true,
    "**/*.o": true
}

```

---

## Running and Debugging

The workspace is configured to use **GDB** for debugging and **GCC** for compilation.

* **F5** — **Build & Debug**: Automatically compiles the active file and starts a debugging session (breakpoints, variable inspection).
* **Ctrl + F5** — **Run (No Debug)**: Compiles and executes the program directly in the integrated terminal.

---

## Keybinds and Tasks

Custom tasks are defined in `.vscode/tasks.json` to handle compilation with strict flags (`-Wall -Wextra -Werror`).

* **Ctrl + Shift + B** — Build current file
* **Ctrl + Shift + P** — Open Command Palette
* **Ctrl + `** — Toggle Terminal

### Quick Reference Table

| Action | Keybind | Task Name / Command |
| --- | --- | --- |
| **Build File** | `Ctrl + Shift + B` | Build current file |
| **Debug File** | `F5` | Debug C Program |
| **Run File** | `Ctrl + F5` | Run current file (no debug) |
| **Terminal** | `Ctrl + `` | Open WSL Bash |

---

## Available Tasks

### Build current file

Compiles the active `.c` file using:
`gcc -std=c11 -Wall -Wextra -Werror -lm`

### Build all C files in folder

Useful for projects split across multiple files. It links all `.c` files in the current directory into `all_c_programs.out`.

---

## Requirements

Ensure the build essentials are installed in your WSL Ubuntu instance:

```bash
sudo apt update
sudo apt install build-essential gdb

```
