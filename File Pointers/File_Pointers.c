// Filename: File_Pointers.c
//
// These are notes and sandbox code for the CS50 2018 Week 3 short video
// entitled "File Pointers".
//
// Date: 08/15/2018
//
// Name: Ian Hutcheson
//
// IDE: Microsoft Visual Studio 2017


#include <stdio.h>

void main()  {
	// file manipulation functions all live in stdio.h
	
	// Common file (I/O) functions include:
	// fopen(), fclose(), fgetc(), fputc(), fread(), fwrite()
	
	// All accept a file pointer as one of their parameters, except for
	// fopen() which gets the initial file pointer
	
	// fopen()
	// opens a file and returns a file pointer to it
	// NOTE: Always check if file was successfully opened (i.e. ptr != NULL)
	// Usage: FILE* ptr = fopen(<filename>, <operation>);
	// Example: FILE* ptr1 = fopen("filename.txt", "r"); opens a file for reading
	// <operations> include read, write, and append
	// write overwrites from beginning of file, append starts writing from EOF

	// fclose()
	// closes the file pointed to by the given file pointer
	// Example: fclose(ptr);
	
	// fgetc()
	// "file get a character"
	// reads and returns the next character from the file pointed to
	// <operation> must be "r"
	// Usage: char ch = fgetc(<file pointer>);
	//
	// How to get all the characters from a file?
	//     char ch;
	//         while((ch = fgetc(ptr)) != EOF)
	//         printf("%c", ch);
	//     While ch does not equal the 'end of file' character, print each char
	//     Reads from a file and prints its entire contents (one by one) to console

	// fputc()
	// Companion function of fgetc()
	// Writes a single character to file
	// File must have been opened for "w" or "a"
	// Usage: fputc(<character>, <file pointer>);
	// Write the character to the file pointed to by the file pointer
	// Copy a file? Read in chars using the loop above and fputc each
	//     char into a second file that's been opened for writing

	// fread()
	// Usage: fread(<buffer>, <size>, <qty>, <file pointer>);
	// Generic version of fgetc that allows us to get any amount of info
	//     rather than single characters
	// Read an arbitrary amount of data from a file and store it in a buffer 
	//    (usually an array) pointed to by <buffer>.
	// Example: int arr[10];  <-- arr[10] is located on the stack
	//			fread(arr, sizeof(int), 10, ptr);
	//			this code reads (4 bytes * 10) bytes of info from ptr and 
	//			stores it in arr.
	//          essentially reads 10 integers from ptr file and stores in arr.
	//			Note: saves it to the stack
	//
	// What if you wanted to save it on the heap? Use dynamically allocated memory
	// Example: double* arr2 = malloc(sizeof(double) * 80);
	//				// malloc allocates memory on the heap
	//				// double takes up 8 bytes,
	//				// arr2 is a pointer to a double.
	//				// this code allocates 8*80 (or 640) bytes of memory to an array
	//				// of doubles pointed to by arr2
	//          fread(arr2, sizeof(double), 80, ptr);
	//				// this code reads 640 bytes of memory from the file pointed 
	//				// to by ptr and stores it in arr2
	// This is pretty simple! Don't be intimidated!
	// Note: First argument to fread is a pointer! And remember, the name of an array
	//     is actually a pointer to the first value in the array.

	// fwrite()
	// Companion function to fread()
	// Usage: fwrite(<buffer>, <size>, <qty>, <file pointer>);
	// Pointer to a buffer, (size * qty) or the amount of bytes in the buffer,
	// and a pointer to the file being written on.
	// Again, file pointer must be set to "w" or "a"
	// And for the third time, the <buffer> argument accepts a pointer!!

	// Other functions
	// fgets() reads a full string from a file
	// fputs() writes a full string to a file
	// fprintf() writes a formatted string to a file
	// fseek() allows you to rewind or fast forward within a file (cursor analogy)
	// ftell() tells you what position (byte) you're at within a file, like the
	//     clock on a DVD (at the moment 49:38 of a movie, for example)
	// feof() tells you whether you're read to the end of a file
	// ferror() tells you if something has gone wrong when working with a file

	printf("Hello world!\n");

	return; 
}