# Debugging Guide

## GDB (GNU Debugger)

### Compilation for Debugging
```bash
gcc -g -o program program.c
```

### Basic GDB Commands
```bash
gdb ./program

(gdb) break main          # Set breakpoint at main
(gdb) break file.c:10     # Set breakpoint at line 10
(gdb) run                 # Start program
(gdb) next                # Execute next line
(gdb) step                # Step into function
(gdb) continue            # Continue execution
(gdb) print variable      # Print variable value
(gdb) backtrace           # Show call stack
(gdb) quit                # Exit GDB
```

### Advanced GDB
```bash
(gdb) watch variable      # Watch variable changes
(gdb) info breakpoints    # List breakpoints
(gdb) delete 1            # Delete breakpoint 1
(gdb) set var x = 5       # Change variable value
(gdb) display x           # Display x after each step
```

## Valgrind (Memory Leak Detection)

### Installation
```bash
# Ubuntu/Debian
sudo apt-get install valgrind

# macOS
brew install valgrind
```

### Memory Leak Check
```bash
valgrind --leak-check=full ./program
valgrind --leak-check=full --show-leak-kinds=all ./program
```

### Common Memory Issues

#### Memory Leak
```c
int *ptr = malloc(100 * sizeof(int));
```

#### Use After Free
```c
free(ptr);
*ptr = 10;
```

#### Double Free
```c
free(ptr);
free(ptr);
```

## Static Analysis

### Compiler Warnings
```bash
gcc -Wall -Wextra -Wpedantic -Werror program.c
```

### Clang Static Analyzer
```bash
clang --analyze program.c
```

### Cppcheck
```bash
cppcheck program.c
```

## Print Debugging

### Debug Macros
```c
#define DEBUG 1

#if DEBUG
#define LOG(fmt, ...) printf("DEBUG: " fmt "\n", ##__VA_ARGS__)
#else
#define LOG(fmt, ...)
#endif
```

### Usage
```c
LOG("Variable x = %d", x);
LOG("Entering function");
```

## Common Bugs

### Segmentation Fault
- Dereferencing NULL pointer
- Buffer overflow
- Stack overflow
- Use after free

### Memory Leaks
- Forgetting to free allocated memory
- Losing pointer before freeing

### Undefined Behavior
- Uninitialized variables
- Array out of bounds
- Integer overflow

## Best Practices

1. **Compile with warnings** - Always use -Wall -Wextra
2. **Use Valgrind** - Check for memory issues
3. **Initialize variables** - Avoid undefined behavior
4. **Check return values** - Don't ignore errors
5. **Use assertions** - Validate assumptions
6. **Test incrementally** - Test small parts first
7. **Use version control** - Git for tracking changes

## Tools Summary

| Tool | Purpose |
|------|---------|
| GDB | Interactive debugging |
| Valgrind | Memory leak detection |
| Cppcheck | Static analysis |
| AddressSanitizer | Runtime error detection |
| Clang Analyzer | Static analysis |
