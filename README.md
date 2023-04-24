# String-functions

String-functions is a C implementation of standard string functions. It provides a set of functions for working with strings, including copying, concatenating, comparing, and searching for substrings.

## Features

- Implements standard string functions
- Easy to use and integrate into existing C projects

## Functions

### my_puts

```c
void my_puts(char* str);
```

The `my_puts` function writes a string to the standard output followed by a newline character.

### my_strlen

```c
int my_strlen(char* str);
```

The `my_strlen` function returns the length of a string.

### my_strcpy

```c
char* my_strcpy(char* dest, char* src);
```

The `my_strcpy` function copies a string from source to destination.

### my_strncpy

```c
char* my_strncpy(char* dest, char* src, int n);
```

The `my_strncpy` function copies n characters of a string from source to destination.

### my_strcat

```c
char* my_strcat(char* dest, char* src);
```

The `my_strcat` function concatenates a string from source to destination.

### my_strncat

```c
char* my_strncat(char* dest, char* src, int n);
```

The `my_strncat` function concatenates n characters of a string from source to destination.

### my_strdup

```c
char* my_strdup(char* src);
```

The `my_strdup` function duplicates a string.

### my_fgets

```c
char* my_fgets(char* str, int num, FILE* stream);
```

The `my_fgets` function reads a string from a file stream.

### getline

```c
ssize_t getline(char** lineptr, size_t* n, FILE* stream);
```

The `getline` function reads a line from a file stream and allocates memory dynamically for the line.

## Usage

### Compilation and Instalation

To use my library, compile your files along with Library.cpp

For example:
```
g++ TestingLibrary.c lib/Library.c -o main
```

### Examples

Here's an example program that demonstrates how to use the string functions library:

```c
#include <stdio.h>
#include <string.h>
#include "string_functions.h"

int main() {
    char str1[100] = "hello";
    char str2[100] = "world";
    char str3[100];

    // Copy str1 to str3
    my_strcpy(str3, str1);

    // Concatenate str2 to str3
    my_strcat(str3, str2);

    // Compare str1 and str2
    int result = strcmp(str1, str2);

    // Search for "lo" in str1
    char* pos = strstr(str1, "lo");

    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("str3 = %s\n", str3);
    printf("str1 and str2 comparison result: %d\n", result);
    printf("Substring position in str1: %s\n", pos);

    return 0;
}
```

## Contributing

If you want to contribute to the project, feel free to submit a pull request.

## License

This project is licensed under the MIT License. See the LICENSE file for details.

