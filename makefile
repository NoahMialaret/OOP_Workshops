# Makefile

# Compiler

CXX = g++

# Compiler flags

CXXFLAGS = -std=c++11 -Wall -Wextra

# Executable name

TARGET = test_runner

# Source files

SRCS = main.cpp Invoice.cpp

# Build and run tests

all:
    $(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET) 
    ./$(TARGET)

# Clean rule

clean:
    rm -f $(TARGET)