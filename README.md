# C Programming Language - Complete Reference

A comprehensive, production-ready collection of C programming concepts, implementations, examples, and learning resources.

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![C Standard](https://img.shields.io/badge/C-C11-blue.svg)]()
[![Build](https://img.shields.io/badge/build-passing-brightgreen.svg)]()

## 📚 Repository Structure

```
c_programming_language/
├── 01_basics/               # Fundamentals, I/O, variables
├── 02_data_types/           # Primitive types, modifiers, casting
├── 03_operators/            # All operator types
├── 04_control_flow/         # Loops, conditionals
├── 05_functions/            # Functions, recursion, variadic
├── 06_arrays/               # 1D, 2D, dynamic arrays
├── 07_pointers/             # Pointer fundamentals
├── 08_strings/              # String manipulation
├── 09_structures/           # Structs, nested, padding
├── 10_unions_enums/         # Unions, enums, typedef
├── 11_dynamic_memory/       # malloc, calloc, realloc
├── 12_file_io/              # File operations
├── 13_preprocessor/         # Macros, conditional compilation
├── 14_advanced_pointers/    # Function pointers, callbacks
├── 15_bitwise_operations/   # Bit manipulation
├── 16_data_structures/      # Lists, stacks, queues, trees
├── 17_algorithms/           # Sorting, searching
├── 18_system_programming/   # Processes, signals, IPC
├── 19_multithreading/       # POSIX threads, synchronization
├── 20_best_practices/       # Code quality, security
├── examples/                # Real-world projects
│   ├── project_structure/   # Multi-file project example
│   └── mini_projects/       # Complete mini applications
├── exercises/               # Practice problems
├── tests/                   # Testing framework
└── docs/                    # Comprehensive guides
```

## 🎯 Quick Start

```bash
# Clone the repository
git clone https://github.com/yourusername/c_programming_language.git
cd c_programming_language

# Build all examples
make all

# Build specific category
make 07_pointers

# Clean build artifacts
make clean

# Run a specific example
cd 01_basics
gcc 01_hello_world.c -o hello
./hello
```

## 🚀 Features

- **120+ Code Examples** - Every C concept with working code
- **No Comments Policy** - Self-documenting, clean code
- **Build System** - Makefile for easy compilation
- **Mini Projects** - Real-world applications
- **Exercises** - Practice problems with requirements
- **Testing Framework** - Unit test infrastructure
- **Comprehensive Docs** - Learning paths, debugging guides
- **Production Ready** - Security and best practices included

## 📖 Topics Covered

### 01. Basics
- Hello World
- Compilation Process
- Program Structure
- Input/Output Functions
- Variable Declaration and Initialization

### 02. Data Types
- Primitive Types (char, int, float, double)
- Type Modifiers (short, long, signed, unsigned)
- Type Qualifiers (const, volatile, restrict)
- sizeof Operator
- Type Casting

### 03. Operators
- Arithmetic Operators
- Relational Operators
- Logical Operators
- Bitwise Operators
- Assignment Operators
- Increment/Decrement Operators
- Ternary Operator
- Operator Precedence

### 04. Control Flow
- if, else, else if
- switch-case
- for Loop
- while Loop
- do-while Loop
- break and continue
- goto Statement

### 05. Functions
- Function Declaration and Definition
- Function Parameters
- Return Values
- Function Prototypes
- Recursion
- Static Functions
- Inline Functions
- Variable Arguments (stdarg.h)

### 06. Arrays
- One-Dimensional Arrays
- Multi-Dimensional Arrays
- Array Initialization
- Array and Pointer Relationship
- Passing Arrays to Functions
- Variable Length Arrays

### 07. Pointers
- Pointer Basics
- Pointer Arithmetic
- Pointer to Pointer
- Null Pointers
- Void Pointers
- Dangling Pointers
- Wild Pointers

### 08. Strings
- String Representation
- String Functions (string.h)
- String Manipulation
- String Arrays
- Command Line Arguments

### 09. Structures
- Structure Definition
- Structure Initialization
- Nested Structures
- Structure Pointers
- Structure Padding and Alignment
- Self-Referential Structures
- Bit Fields

### 10. Unions and Enums
- Union Declaration
- Union vs Structure
- Enumeration Types
- typedef Keyword
- Complex Type Definitions

### 11. Dynamic Memory Management
- malloc, calloc, realloc, free
- Memory Leaks
- Memory Allocation Strategies
- Dynamic 2D Arrays

### 12. File I/O
- File Pointers
- Opening and Closing Files
- Reading and Writing (fgetc, fputc, fgets, fputs)
- Binary File Operations
- File Positioning (fseek, ftell, rewind)
- Error Handling (ferror, feof)

### 13. Preprocessor
- Macro Definitions
- Conditional Compilation
- Include Guards
- Predefined Macros
- Macro Functions
- Stringification and Token Pasting

### 14. Advanced Pointers
- Function Pointers
- Pointers to Arrays
- Array of Pointers
- Callback Functions
- Dynamic 2D Arrays

### 15. Bitwise Operations
- Bit Manipulation Techniques
- Bit Flags
- Bit Masking
- Shift Operations
- Practical Applications

### 16. Data Structures
- Linked Lists (Singly, Doubly)
- Stacks
- Queues
- Trees (Binary Tree)
- Hash Tables

### 17. Algorithms
- Sorting (Bubble, Selection, Insertion, Quick, Merge)
- Searching (Linear, Binary)
- Recursion Patterns
- Algorithm Analysis

### 18. System Programming
- Process Control
- Signals
- Inter-Process Communication (Pipes)
- System Calls
- Error Handling (errno.h)

### 19. Multithreading
- POSIX Threads (pthread.h)
- Thread Creation and Termination
- Mutexes
- Semaphores
- Thread Synchronization
- Race Conditions

### 20. Best Practices
- Code Style and Conventions
- Memory Safety
- Error Handling Patterns
- Performance Optimization
- Security Considerations

## 📂 Examples & Projects

### Multi-File Project Structure
```
examples/project_structure/
├── main.c           # Entry point
├── calculator.c/h   # Calculator module
├── utils.c/h        # Utility functions
└── Makefile         # Build configuration
```

### Mini Projects
1. **Student Management System** - CRUD operations, file I/O
2. **File Encryption Tool** - XOR cipher implementation
3. **Linked List Operations** - Complete data structure

### Run a Mini Project
```bash
cd examples/mini_projects
gcc 01_student_management.c -o student_mgmt
./student_mgmt
```

## 🎓 Learning Resources

### For Beginners
1. Start with [LEARNING_PATH.md](docs/LEARNING_PATH.md)
2. Follow 16-week curriculum
3. Complete exercises in `exercises/`
4. Build mini projects

### For Intermediate
1. Focus on pointers (07, 14)
2. Master data structures (16)
3. Study algorithms (17)
4. Practice with exercises

### For Advanced
1. System programming (18)
2. Multithreading (19)
3. Best practices (20)
4. Build your own projects

## 🔧 Compilation

### Quick Compilation
```bash
gcc -Wall -Wextra -std=c11 -o output source.c
```

### With Debugging
```bash
gcc -g -Wall -Wextra -std=c11 -o output source.c
```

### Multithreading
```bash
gcc -Wall -Wextra -std=c11 -pthread -o output source.c
```

### Using Makefile
```bash
make all                    # Build everything
make 19_multithreading      # Build specific category
make clean                  # Remove artifacts
```

See [COMPILATION_GUIDE.md](docs/COMPILATION_GUIDE.md) for detailed instructions.

## 🐛 Debugging

```bash
# Memory leak detection
valgrind --leak-check=full ./program

# GDB debugging
gcc -g program.c -o program
gdb ./program
```

See [DEBUGGING_GUIDE.md](docs/DEBUGGING_GUIDE.md) for comprehensive guide.

## 🧪 Testing

```bash
cd tests
gcc test_runner.c -o test_runner
./test_runner
```

## 📋 Requirements

- **Compiler:** GCC 7.0+ or Clang 6.0+
- **Standard:** C11 or later
- **OS:** Linux, macOS, Windows (MinGW/Cygwin)
- **Optional:** Valgrind, GDB for debugging

## 🤝 Contributing

Contributions are welcome! Please read [CONTRIBUTING.md](CONTRIBUTING.md) for guidelines.

### Quick Contribution Steps
1. Fork the repository
2. Create feature branch (`git checkout -b feature/NewExample`)
3. Commit changes (`git commit -m 'Add new example'`)
4. Push to branch (`git push origin feature/NewExample`)
5. Open Pull Request

## 📚 Documentation

- [COMPILATION_GUIDE.md](docs/COMPILATION_GUIDE.md) - How to compile C programs
- [LEARNING_PATH.md](docs/LEARNING_PATH.md) - 16-week learning curriculum
- [DEBUGGING_GUIDE.md](docs/DEBUGGING_GUIDE.md) - GDB, Valgrind, debugging tips
- [CONTRIBUTING.md](CONTRIBUTING.md) - Contribution guidelines

## 📊 Statistics

- **Total Files:** 150+
- **Code Examples:** 120+
- **Mini Projects:** 3
- **Exercise Sets:** 2+
- **Lines of Code:** 5000+
- **Categories:** 20

## 🌟 Highlights

### Clean Code
- No unnecessary comments
- Self-documenting code
- Consistent style

### Comprehensive Coverage
- Basics to advanced topics
- System programming
- Multithreading
- Security practices

### Production Ready
- Error handling patterns
- Memory safety
- Security considerations
- Performance optimization

## 📖 Recommended Books

- "The C Programming Language" by Brian W. Kernighan and Dennis M. Ritchie
- "C Programming: A Modern Approach" by K. N. King
- "Expert C Programming: Deep C Secrets" by Peter van der Linden
- "21st Century C" by Ben Klemens

## 🔗 Useful Links

- [C Standard Documentation](https://en.cppreference.com/w/c)
- [GCC Documentation](https://gcc.gnu.org/onlinedocs/)
- [Valgrind Documentation](https://valgrind.org/docs/)

## ⚖️ License

MIT License - see [LICENSE](LICENSE) file for details.

## 👨‍💻 Author

Created as a comprehensive learning resource for C programming.

## 🙏 Acknowledgments

- C Standard Committee
- GCC and Clang teams
- Open source community

---

**⭐ Star this repository if you find it helpful!**

**🐛 Found a bug? Open an issue!**

**💡 Have suggestions? Pull requests are welcome!**
