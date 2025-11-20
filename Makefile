CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -O2
PTHREAD_FLAGS = -pthread
LIBS = -lm

DIRS = 01_basics 02_data_types 03_operators 04_control_flow 05_functions \
       06_arrays 07_pointers 08_strings 09_structures 10_unions_enums \
       11_dynamic_memory 12_file_io 13_preprocessor 14_advanced_pointers \
       15_bitwise_operations 16_data_structures 17_algorithms \
       18_system_programming 19_multithreading 20_best_practices

.PHONY: all clean help $(DIRS)

all:
	@echo "Building all examples..."
	@for dir in $(DIRS); do \
		$(MAKE) -s $$dir; \
	done
	@echo "Build complete!"

01_basics:
	@echo "Building 01_basics..."
	@cd 01_basics && for file in *.c; do \
		$(CC) $(CFLAGS) $$file -o $${file%.c}.out 2>/dev/null || true; \
	done

02_data_types:
	@echo "Building 02_data_types..."
	@cd 02_data_types && for file in *.c; do \
		$(CC) $(CFLAGS) $$file -o $${file%.c}.out 2>/dev/null || true; \
	done

03_operators:
	@echo "Building 03_operators..."
	@cd 03_operators && for file in *.c; do \
		$(CC) $(CFLAGS) $$file -o $${file%.c}.out 2>/dev/null || true; \
	done

04_control_flow:
	@echo "Building 04_control_flow..."
	@cd 04_control_flow && for file in *.c; do \
		$(CC) $(CFLAGS) $$file -o $${file%.c}.out 2>/dev/null || true; \
	done

05_functions:
	@echo "Building 05_functions..."
	@cd 05_functions && for file in *.c; do \
		$(CC) $(CFLAGS) $$file -o $${file%.c}.out 2>/dev/null || true; \
	done

06_arrays:
	@echo "Building 06_arrays..."
	@cd 06_arrays && for file in *.c; do \
		$(CC) $(CFLAGS) $$file -o $${file%.c}.out 2>/dev/null || true; \
	done

07_pointers:
	@echo "Building 07_pointers..."
	@cd 07_pointers && for file in *.c; do \
		$(CC) $(CFLAGS) $$file -o $${file%.c}.out 2>/dev/null || true; \
	done

08_strings:
	@echo "Building 08_strings..."
	@cd 08_strings && for file in *.c; do \
		$(CC) $(CFLAGS) $$file -o $${file%.c}.out 2>/dev/null || true; \
	done

09_structures:
	@echo "Building 09_structures..."
	@cd 09_structures && for file in *.c; do \
		$(CC) $(CFLAGS) $$file -o $${file%.c}.out 2>/dev/null || true; \
	done

10_unions_enums:
	@echo "Building 10_unions_enums..."
	@cd 10_unions_enums && for file in *.c; do \
		$(CC) $(CFLAGS) $$file -o $${file%.c}.out 2>/dev/null || true; \
	done

11_dynamic_memory:
	@echo "Building 11_dynamic_memory..."
	@cd 11_dynamic_memory && for file in *.c; do \
		$(CC) $(CFLAGS) $$file -o $${file%.c}.out 2>/dev/null || true; \
	done

12_file_io:
	@echo "Building 12_file_io..."
	@cd 12_file_io && for file in *.c; do \
		$(CC) $(CFLAGS) $$file -o $${file%.c}.out 2>/dev/null || true; \
	done

13_preprocessor:
	@echo "Building 13_preprocessor..."
	@cd 13_preprocessor && for file in *.c; do \
		$(CC) $(CFLAGS) $$file -o $${file%.c}.out 2>/dev/null || true; \
	done

14_advanced_pointers:
	@echo "Building 14_advanced_pointers..."
	@cd 14_advanced_pointers && for file in *.c; do \
		$(CC) $(CFLAGS) $$file -o $${file%.c}.out 2>/dev/null || true; \
	done

15_bitwise_operations:
	@echo "Building 15_bitwise_operations..."
	@cd 15_bitwise_operations && for file in *.c; do \
		$(CC) $(CFLAGS) $$file -o $${file%.c}.out 2>/dev/null || true; \
	done

16_data_structures:
	@echo "Building 16_data_structures..."
	@cd 16_data_structures && for file in *.c; do \
		$(CC) $(CFLAGS) $$file -o $${file%.c}.out 2>/dev/null || true; \
	done

17_algorithms:
	@echo "Building 17_algorithms..."
	@cd 17_algorithms && for file in *.c; do \
		$(CC) $(CFLAGS) $$file -o $${file%.c}.out 2>/dev/null || true; \
	done

18_system_programming:
	@echo "Building 18_system_programming..."
	@cd 18_system_programming && for file in *.c; do \
		$(CC) $(CFLAGS) $$file -o $${file%.c}.out 2>/dev/null || true; \
	done

19_multithreading:
	@echo "Building 19_multithreading..."
	@cd 19_multithreading && for file in *.c; do \
		$(CC) $(CFLAGS) $(PTHREAD_FLAGS) $$file -o $${file%.c}.out 2>/dev/null || true; \
	done

20_best_practices:
	@echo "Building 20_best_practices..."
	@cd 20_best_practices && for file in *.c; do \
		$(CC) $(CFLAGS) $$file -o $${file%.c}.out 2>/dev/null || true; \
	done

clean:
	@echo "Cleaning build artifacts..."
	@find . -type f \( -name "*.out" -o -name "*.exe" -o -name "*.o" \) -delete
	@echo "Clean complete!"

help:
	@echo "Available targets:"
	@echo "  all              - Build all examples"
	@echo "  clean            - Remove all build artifacts"
	@echo "  <directory>      - Build specific directory (e.g., make 01_basics)"
	@echo "  help             - Show this help message"
