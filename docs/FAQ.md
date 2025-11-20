# Frequently Asked Questions

## General Questions

### Q: What level of experience do I need to use this repository?
**A:** This repository is suitable for all levels:
- **Beginners**: Start with 01_basics and follow the learning path
- **Intermediate**: Focus on pointers, data structures, and algorithms
- **Advanced**: Study system programming, multithreading, and best practices

### Q: How long will it take to complete all materials?
**A:** Following the 16-week learning path (docs/LEARNING_PATH.md), you can complete the fundamentals in about 4 months with consistent daily practice.

### Q: Can I use this for commercial projects?
**A:** Yes! This repository is licensed under MIT License, allowing commercial use.

## Technical Questions

### Q: Which C standard should I use?
**A:** We recommend C11 (or C17) for modern development:
```bash
gcc -std=c11 -Wall -Wextra program.c
```

### Q: Why are there no comments in the code?
**A:** This repository follows a "clean code" philosophy where:
- Code should be self-documenting
- Function and variable names are descriptive
- Structure and logic are clear
- Comments often become outdated; good code doesn't need them

### Q: How do I compile the examples on Windows?
**A:** Install MinGW or use WSL:
```bash
# MinGW
gcc -o program.exe program.c

# WSL (Windows Subsystem for Linux)
gcc -o program program.c
```

### Q: What if I get "undefined reference to pthread" error?
**A:** Add the pthread flag:
```bash
gcc -pthread program.c -o program
```

### Q: How do I debug memory leaks?
**A:** Use Valgrind (Linux/macOS):
```bash
gcc -g program.c -o program
valgrind --leak-check=full ./program
```

## Learning Questions

### Q: Should I start with basics even if I know some C?
**A:** Yes, it's good to review fundamentals. You can move quickly through familiar topics.

### Q: What's the best order to learn topics?
**A:** Follow the numbered directories in order (01-20). Each builds on previous concepts.

### Q: How much time should I spend on each category?
**A:**
- Basics (01-05): 1-2 weeks
- Intermediate (06-12): 3-4 weeks
- Advanced (13-20): 4-6 weeks

### Q: Should I complete all exercises before moving on?
**A:** Try to complete at least 50% of exercises before advancing. Return to difficult ones later.

## Compilation Questions

### Q: What compiler flags should I use?
**A:** For learning and development:
```bash
gcc -Wall -Wextra -std=c11 -g -O0 program.c
```

For production:
```bash
gcc -Wall -Wextra -std=c11 -O2 program.c
```

### Q: How do I compile multiple files?
**A:**
```bash
# Direct compilation
gcc main.c utils.c helper.c -o program

# Using object files
gcc -c main.c
gcc -c utils.c
gcc main.o utils.o -o program

# Using Makefile
make
```

### Q: Can I use Clang instead of GCC?
**A:** Yes! Clang is fully compatible:
```bash
clang -Wall -Wextra -std=c11 program.c
```

## Project Questions

### Q: Can I contribute my own examples?
**A:** Absolutely! Please read CONTRIBUTING.md for guidelines.

### Q: How do I report a bug?
**A:** Open an issue on GitHub with:
- Description of the problem
- Steps to reproduce
- Expected vs actual behavior
- Your environment (OS, compiler version)

### Q: Can I use code from this repo in my projects?
**A:** Yes, under MIT License terms. Attribution is appreciated but not required.

### Q: Are there solutions to the exercises?
**A:** Not provided intentionally. Try solving them yourself or discuss in communities.

## Platform-Specific Questions

### Q: Does this work on macOS?
**A:** Yes! Most examples work on macOS. System programming examples may need adjustments.

### Q: Does this work on Windows?
**A:** Yes, with MinGW or WSL. Some POSIX-specific examples (signals, threads) may need Windows equivalents.

### Q: Can I use this on embedded systems?
**A:** Core concepts apply, but embedded-specific topics (interrupts, peripherals) aren't covered.

## Advanced Questions

### Q: How do I profile my C programs?
**A:** Use profiling tools:
```bash
# gprof
gcc -pg program.c -o program
./program
gprof program gmon.out

# perf (Linux)
perf record ./program
perf report
```

### Q: Should I learn assembly with C?
**A:** Understanding basic assembly helps with:
- Performance optimization
- Debugging
- Understanding low-level concepts
But it's not required for most C programming.

### Q: How do I handle large projects in C?
**A:**
- Use modular design (separate .c/.h files)
- Create libraries for reusable code
- Use build systems (Make, CMake)
- Follow consistent coding standards
- Use version control (Git)

### Q: What's the difference between C and C++?
**A:**
- C: Procedural, simpler, lower-level control
- C++: Object-oriented, more features, larger language
- Learn C first for better understanding of fundamentals

## Troubleshooting

### Q: "Segmentation fault" - what does this mean?
**A:** Memory access violation. Common causes:
- Dereferencing NULL pointer
- Buffer overflow
- Accessing freed memory
- Stack overflow

Use debugger to find the issue:
```bash
gcc -g program.c -o program
gdb ./program
```

### Q: My program compiles but doesn't work correctly
**A:**
1. Check return values
2. Initialize all variables
3. Use debugger (GDB)
4. Add print statements
5. Use Valgrind for memory issues

### Q: "Warning: implicit declaration of function"
**A:** Include the proper header file or declare the function before use.

## Best Practices Questions

### Q: Should I use malloc or calloc?
**A:**
- `malloc`: When you'll immediately initialize the memory
- `calloc`: When you need zero-initialized memory

### Q: When should I use static functions?
**A:** Use `static` for functions that shouldn't be visible outside the current file (internal linkage).

### Q: How do I prevent memory leaks?
**A:**
- Always free what you allocate
- Use tools like Valgrind
- Follow RAII-like patterns
- Set pointers to NULL after freeing

### Q: Should I use goto?
**A:** Generally avoid it. Acceptable uses:
- Error handling in C (cleanup code)
- Breaking out of nested loops
- State machines

## Resources Questions

### Q: What books do you recommend?
**A:** See docs/RESOURCES.md for comprehensive list. Top picks:
- "The C Programming Language" by K&R
- "C Programming: A Modern Approach" by K. N. King

### Q: Are there video tutorials?
**A:** Yes! Check docs/RESOURCES.md for video courses and YouTube channels.

### Q: Where can I get help?
**A:**
- Stack Overflow (tag: c)
- Reddit: r/C_Programming
- This repository's issues section
- IRC: ##c on Libera.Chat

## Still Have Questions?

Open an issue on GitHub or check:
- [RESOURCES.md](RESOURCES.md) - Additional learning materials
- [LEARNING_PATH.md](LEARNING_PATH.md) - Structured curriculum
- [DEBUGGING_GUIDE.md](DEBUGGING_GUIDE.md) - Debugging help
