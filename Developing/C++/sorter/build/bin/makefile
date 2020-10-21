###############################
# EDITABLE
###############################

# Source folder
SRC = $(CURDIR)/../../src/*.cpp

# Compiler and flags
CC = g++
CFLAGS = -I
VERSION = --std=c++17

# Name of the file you want to compile
TARGET = sort

###############################
# DON'T TOUCH FROM HERE DOWN
###############################

# So it doesn't check clean as a file
.PHONY = clean

# Compile from source folder
$(TARGET): $(SRC)
	$(CC) -o $(TARGET) $(VERSION) $(SRC) $(CFLAGS)
	./$(TARGET)

# Cleaner
clean:
	rm sort