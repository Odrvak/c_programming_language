CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -O2
TARGET = calculator
OBJS = main.o calculator.o utils.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c calculator.h utils.h
	$(CC) $(CFLAGS) -c main.c

calculator.o: calculator.c calculator.h
	$(CC) $(CFLAGS) -c calculator.c

utils.o: utils.c utils.h
	$(CC) $(CFLAGS) -c utils.c

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
