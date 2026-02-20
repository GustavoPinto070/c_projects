# C Project Development Environment

This workspace is configured to make C development in VS Code smooth and efficient.

---

## Workspace Settings

To manage visibility of compiled `.out` files, edit `.vscode/settings.json`.

### Hide `.out` files

```json
"files.exclude": {
    "**/*.out": true
}
```

### Show `.out` files

```json
"files.exclude": {
    "**/*.out": false
}
```

---

## Running and Debugging

You can run or debug your C programs directly from VS Code:

- **F5** — Start debugging (breakpoints, variable inspection, etc.)
- **Ctrl + F5** — Run without debugging (compile + execute in terminal)

---

## Useful Keybinds and Tasks

Custom tasks are available for building and linting.

- **Ctrl + Shift + B** — Build current file  
- **Ctrl + Shift + P** — Open Command Palette  
- **Ctrl + `** — Open terminal  
- **Ctrl + Shift + P → "Run Task"** — Search for tasks  

### Shortcut Table

| Action               | Keybind                       |
|----------------------|-------------------------------|
| Build Current File   | Ctrl + Shift + B              |
| Open Command Palette | Ctrl + Shift + P              |
| Open Terminal        | Ctrl + `                      |
| Search for Tasks     | Ctrl + Shift + P → "Run Task" |

---

## Available Tasks

### Build current file

Compiles the currently open file into a `.out` executable.

### Build all C files in folder

Useful for multi-file projects.

### Run clang-tidy on current file

Runs the linter to detect code quality issues and potential bugs.

---

## Requirements

Install clang-tidy 18 for best results:

```bash
sudo apt install clang-tidy-18
```

The tasks will fall back to the default `clang-tidy` if version 18 is not available.
