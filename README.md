Ram Eater 🐏💾

A simple C program that allocates a user-specified amount of RAM using "malloc()" and fills the allocated memory with data.

Features

- Takes the RAM size in MB from the command line.
- Allocates memory dynamically using "malloc()".
- Fills the allocated memory using "memset()".
- Waits until the user presses Enter before exiting.

Requirements

- GCC
- A C compiler

Compile

gcc main.c -o ram-eater

Usage

./ram-eater <size_MB>

Example:

./ram-eater 100

Output:

I ate 100 MB , Delicious !
Press Enter to exit...

Warning ⚠️

Be careful when using large values. The program attempts to allocate the requested amount of RAM, which can affect system performance or cause the allocation to fail.

Purpose

This project was created to practice C programming concepts such as:

- Dynamic memory allocation
- "malloc()"
- "memset()"
- Command-line arguments
- Basic error handling
