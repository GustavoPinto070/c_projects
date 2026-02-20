# Workspace README

This folder contains example C sources and a small VS Code workspace setup to build, run and lint C files.

**Quick Overview:**

- **Build current file**: uses the `Build current file` task to compile the active `.c` file to `${fileBasenameNoExtension}.out`.
- **Run (no debug)**: use the `Run current file (no debug)` launch configuration (Run Without Debugging / `Ctrl+F5`) — it runs the compiled `.out` and automatically builds first.
- **Other tasks**: `Build all C files in folder` and `Run clang-tidy on current file` are available in the task picker.

**Files to check:**

- [slide01/.vscode/tasks.json](slide01/.vscode/tasks.json)
- [slide01/.vscode/launch.json](slide01/.vscode/launch.json)
- [slide01/.vscode/settings.json](slide01/.vscode/settings.json)
- [slide01/.vscode/extensions.json](slide01/.vscode/extensions.json)
- [slide01/.clang-format](slide01/.clang-format)

Usage (examples)

Build and run the `hello_world` example from the workspace root:

```bash
gcc -Wall -Wextra -Werror -Wno-unused-result -std=c11 -lm slide01/hello_world/hello_world.c -o slide01/hello_world/hello_world.out
./slide01/hello_world/hello_world.out
```

Build all `.c` files in a folder (task: `Build all C files in folder`):

```bash
(cd slide01/factorial && gcc -Wall -Wextra -Werror -Wno-unused-result -std=c11 -lm *.c -o all_c_programs.out)
```

Run `clang-tidy` on a file (task: `Run clang-tidy on current file`):

```bash
clang-tidy slide01/factorial/factorial.c -- -std=c11
```

Recommended VS Code extensions (workspace recommendations):

- `ms-vscode.cpptools` — Microsoft C/C++ support
- `llvm-vs-code-extensions.vscode-clangd` — language server (clangd)
- `xaver.clang-format` — formatting support
- `ms-vscode.cmake-tools` — CMake (optional)

Notes

- The workspace hides generated `.out` files by default.
- Formatting on save is enabled and controlled by the included `.clang-format` file. Edit it to change style.
- To change compiler flags or task names, edit [slide01/.vscode/tasks.json](slide01/.vscode/tasks.json).

Want anything else here (keyboard shortcut, CI snippet, or Makefile)?
