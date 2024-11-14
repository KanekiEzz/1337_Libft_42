<h1 align="center">ft_libft - 42 _ 1337 kaneki</h1>
<p align="center">
  <a href="https://github.com/KanekiEzz/1337-Libft-42">
    <img src="https://github.com/KanekiEzz/kaneki_badges/blob/main/libftm.png?raw=true" alt="42 Badge">
  </a>
</p>

# libft

`libft` is a comprehensive C library that reimplements several standard C library functions along with a set of additional utilities to assist in C programming projects, especially for those working within constrained environments like the 42 School. This project serves as the cornerstone for many future 42 School projects, emphasizing the importance of a solid foundation in C programming.

## Overview

The goal of `libft` is to create a library of useful functions that will be used throughout your time at 42 School and beyond. This includes functions for string manipulation, memory allocation, character checking and conversion, linked list management, and more. 

## Key Features

- **String Manipulation**: Functions like `ft_strlen`, `ft_strdup`, `ft_strjoin`, and others that handle strings.
- **Memory Management**: Functions such as `ft_memset`, `ft_memcpy`, and `ft_calloc` for managing memory.
- **Character Checks and Conversions**: Includes functions like `ft_isalpha`, `ft_toupper`, and `ft_tolower`.
- **Linked List Management**: Utilities for creating and managing linked lists with functions like `ft_lstnew`, `ft_lstadd_front`, and `ft_lstiter`.
- **Additional Utilities**: A set of miscellaneous functions that can be useful in various contexts, such as converting integers to strings or splitting strings.

## Getting Started

### Installation

1. **Clone the Repository**
   ```sh
   git clone https://github.com/KanekiEzz/1337-Libft-42.git
   ```

2. **Compile the Library**
   Navigate to the `libft` directory and run `make`. This will compile the library and produce a `libft.a` file.
   ```sh
   cd libft
   make
   ```

### Usage

To use `libft` in your C projects:

1. Include the `libft.h` header file in your C source files.
   ```c
   #include "libft.h"
   ```

2. Compile your project along with `libft.a`. For example:
   ```sh
   gcc -o your_program your_source_files libft.a
   ```

## Contributing

Contributions to `libft` are welcome! Whether you've found a bug, have a feature request, or want to contribute code:

1. Fork the repository.
2. Create a new branch for your changes.
3. Add your contributions.
4. Push your branch and open a pull request against the `libft` repository.

## Support

If you encounter any issues or have questions about `libft`, please open an issue on the GitHub repository.
