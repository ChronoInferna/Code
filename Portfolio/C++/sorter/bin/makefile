###############################
# EDITABLE					  #
###############################

# Source folder
SRC = $(CURDIR)/../src/*.cpp

# Compiler and flags
CC = g++
FLAGS = -I
VERSION = c++17

# Name of the file you want to compile
TARGET = sort

###############################
# NOT EDITABLE				  #
###############################

VERSIONFLAG = --std=$(VERSION)
.PHONY = clean all win mac

all:
	echo Use "make win" or "make mac"

# Compile from source folder
win: $(SRC)
	$(CC) -o $(TARGET).exe $(VERSIONFLAG) $(SRC) $(FLAGS)
mac: $(SRC)
	$(CC) -o $(TARGET) $(VERSIONFLAG) $(SRC) $(FLAGS)

# Clean
clean:
	rm sort

# So commands don't show up
$V.SILENT: