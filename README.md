<a href="https://github.com/blueyaGIT/libft"><img src="https://github.com/blueyaGIT/blueyaGIT/blob/b34a5a4e10b9019609659eaa0541a4325db88ca5/covers/cover-libft-bonus.png" alt="libft"></a>

###

`libft` is a library of C functions rewritten from the standard library, as well as some additional functions that can be useful for C projects.

`libft` is the first project in the Core-Curriculum within the "42" programming school, this is my interpretation of the assignment with some extra functions that I will add as needed.

## Usage

To use `libft`, download the library in the root of your project using the following command line

#### SSH
```bash
git clone git@github.com:blueyaGIT/libft.git
```
#### HTTPS
```bash
git clone https://github.com/blueyaGIT/libft.git
```
#### GitHub CLI
```bash
gh repo clone blueyaGIT/libft
```
This will create a directory called ``libft/`, enter with the command

```bash
cd libft
```
Once inside, create the static library `libft.a` with the following command

```bash
make
```
`libft.a` will be inside `libft/`, now you just need to compile your project including `libft/libft.a` and adding the `header files` that contain the functions you want to use, all `header files` are inside `libft/h_files`.

### Example of how to include all functions:

```c
#include "libft/libft.h"
```

For more information about the functions, see directly in the corresponding `header file` or for a quick description read the **Functions** section below.

To find the appropriate `header file` see **Categories** below.

## Categories

Inside `libft` there are functions for all kinds of applications, so I have decided to divide them into different `header files`, to make finding the right function efficient and easy, as well as giving the option to include only the necessary functions.

**The Categories are divided as follows:**

- Functions for character manipulation, defined in `libft_char_manipulation.h`.
- Functions for integer manipulation, defined in `libft_int_manipulation.h`.
- Functions for manipulation of a `linked list`, defined together with the functions in `libft_lst_manipulation.h`.
- Functions for dynamic memory allocation, defined in `libft_mem_allocation.h`.
- Functions that check memory, defined in `libft_mem_checks.h`.
- Functions for memory manipulation, defined in `libft_mem_manipulation.h`.
- Functions that check a `string` ending in `0`, defined in `libft_str_checks.h`.
- Functions to manipulate a `string`, defined in `libft_str_manipulation.h`.
- Functions for checking the type of the provided value, defined in `libft_type_checks.h`.
- Functions for writing different variables to a `file descriptor` provided to the function, defined in `libft_write_fd.h`.

There are 3 additional `header files` to those previously described that are not a category per se, and are as follows

 - `ft_printf.h`: The `ft_printf()` function, being more complex than the previous ones, occupies its own `header file` for its operation.
 - `get_next_line_bonus.h`: `get_next_line()` is a version with the bonuses described in the `get_next_line` project of code school 42, hence all its related files include the `_bonus` suffix. As with `ft_printf()` being a complex function it requires its own `header file`.
 - `libft.h`: This `header file` is all the previous ones together in a single `header file` to be able to include all the functions comfortably.

## Functions

The `libft` library includes the following functions (for more detailed information read the `header file`, it includes syntax, parameter description, notes, and more relevant information):

### Complex functions
- `ft_printf()`: Print a `string` including variables of different types.
- `get_next_line()`: Read the text of a file descriptor until a `character` `n` is encountered or the end of the file is reached.

### Libft Char Manipulation
- `ft_toupper()`: Transforms a `char` from lowercase to uppercase.
- `ft_tolower()`: Transforms a `char` from uppercase to lowercase.

### Libft Int Manipulation
- `ft_itoa()`: Transforms an `int` value to its `string` counterpart.

### Libft Lst Manipulation
- `ft_lstnew()`: Creates a new node type `t_list`.
- `ft_lstadd_front()`: Adds a node to the front of the list.
- `ft_lstadd_back()`: Adds a node to the end of the list.
- `ft_lstsize()`: Counts the number of nodes belonging to the list.
- `ft_lstlast()`: Scrolls down the list until the last member is reached.
- `ft_lstdelone()`: Deletes the contents of the node with the provided function, then frees the node with `free()` from the standard library.
- `ft_lstclear`: Completely removes the list, using the provided function for the content and `free()` to free each of the nodes.
- `ft_lstiter()`: Iterates the given function on each node of the list.
- `ft_lstmap()`: Iterate the `f()` function on each node in the list, saving the result in a new list, if something goes wrong, use the `del()` function to remove the contents of the new nodes, and `free()` to remove all nodes from the new list.

### Libft Mem Allocation
- `ft_calloc`: Performs a dynamic memory allocation and initializes all values to 0.
- `ft_free_n_null()`: Check if the given pointer is different from `NULL`, if so perform `free()` of the standard library and move the `pointer` to `NULL`.
- `ft_close`: Checks if the `file descriptor` is valid, if so closes it using `close()` from the standard library.

### Libft Mem Checks
- `ft_memchr`: Searches for the first occurrence of the given `character` within the described memory range.
- `ft_memcmp()`: Compares two memory ranges, returning `0` if they are equal, `>0` or `<0` if they are different.

### Libft Mem Manipulation
- `ft_memset()`: This function takes a memory block and sets it to the given value.
- `ft_memcpy()`: This function copies a source memory block to the destination address.
- `ft_memmove()`: This function is similar to `ft_memcpy()`, but handles cases where the source and destination overlap. `ft_memmove()` avoids this problem by copying the data in an order that depends on the relationship between src and dest.
- `ft_bzero()`: Sets a memory block at the given address to 0.

### Libft Str Checks
- `ft_strchr()`: Searches for the first occurrence of the given `character` within the `string`. If found, returns the address of that location. If not found, returns `NULL`.
- `ft_strrchr()`: This function is similar to `ft_strchr()`, but starts searching from the end of the `string `src`. It returns the address of the last place where the `character` c appears. If not found, it returns `NULL`.
- `ft_strncmp()`: Compares the 2 given strings up to `n` characters or until a difference is found. Returns the difference or `0` if they are equal.
- `ft_strnstr()`: This function searches for the first occurrence of the `array` `needle` in the `array` `haystack`, but does not search beyond `len` characters in `haystack`. If it finds `needle`, it returns the start address of `needle`. If not found, it returns `NULL`.

### Libft Str Manipulation

- `ft_strlen()`: Counts the number of characters in a `string`.
- `ft_strlcpy()`: Copies a `string` from source to destination up to a specified size.
- `ft_strlcat()`: Concatenates a source `string` to the end of a destination `string`, up to a specified size.
- `ft_atoi()`: Converts a `string` to an integer.
- `ft_strdup()`: Creates a copy of a `string`.
- `ft_substr()`: Extracts a substring of a given `string` from a specified index with a given length.
- `ft_strjoin()`: Joins two strings into a new `string`.
- `ft_strtrim()`: Removes the characters defined in `set` from the beginning and end of the `string` `src`, and stores the result in a new `string`.
- `ft_split()`: Splits a `string` into a `string array` using the `char` `c` as delimiter.
- `ft_strmapi()`: Applies a function to each character of a `string` and stores the results in a new `string`.
- `ft_striteri()`: Applies a function to each character in a `string`.

### Libft Type Checks

- `ft_isalpha()`: Checks if the given character is a letter in the `ASCII` table.
- `ft_isdigit()`: Checks if the given character is a digit in the `ASCII` table.
- `ft_isalnum()`: Check if the given character is a letter or a digit in the `ASCII` table.
- `ft_isascii()`: Check if the given character is in the `ASCII` table.
- `ft_isprint()`: Check if the given character is printable according to the `ASCII` table.

### Libft Write FD
- `ft_putchar_fd()`: Writes a `char` to a given file descriptor.
- `ft_putstr_fd()`: Writes a `string` to a given file descriptor.
- `ft_putendl_fd()`: Writes a `string` followed by a newline to a given file descriptor.