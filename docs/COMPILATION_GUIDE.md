# Compilation Guide

## Basic Compilation

### Single File
```bash
gcc -o output_file source_file.c
gcc -Wall -Wextra -std=c11 -o program program.c
```

### Multiple Files
```bash
gcc -o program main.c utils.c helper.c
gcc -Wall -Wextra -std=c11 -o program *.c
```

## Compilation Flags

### Warning Flags
- `-Wall` - Enable all common warnings
- `-Wextra` - Enable extra warnings
- `-Werror` - Treat warnings as errors
- `-pedantic` - Strict ISO C compliance

### Optimization Flags
- `-O0` - No optimization (default)
- `-O1` - Basic optimization
- `-O2` - Recommended optimization
- `-O3` - Aggressive optimization
- `-Os` - Optimize for size

### Debug Flags
- `-g` - Include debug information
- `-ggdb` - Generate debug info for GDB

### Standards
- `-std=c89` - ANSI C (C89/C90)
- `-std=c99` - C99 standard
- `-std=c11` - C11 standard (recommended)
- `-std=c17` - C17 standard

## Platform-Specific

### Linux/macOS
```bash
gcc -Wall -Wextra -std=c11 -pthread program.c -o program -lm
./program
```

### Windows (MinGW)
```bash
gcc -Wall -Wextra -std=c11 program.c -o program.exe
program.exe
```

## Makefile Usage

### Build All
```bash
make all
```

### Build Specific Directory
```bash
make 01_basics
```

### Clean Build Artifacts
```bash
make clean
```

## Common Issues

### Undefined Reference to pthread
```bash
gcc program.c -pthread -o program
```

### Math Library
```bash
gcc program.c -lm -o program
```

### Multiple Source Files
```bash
gcc -c file1.c
gcc -c file2.c
gcc file1.o file2.o -o program
```

## Cross-Compilation

### For ARM
```bash
arm-linux-gnueabi-gcc -o program program.c
```

### For Windows from Linux
```bash
x86_64-w64-mingw32-gcc -o program.exe program.c
```
