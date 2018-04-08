# Libft project for 42 school. [![Build Status](https://travis-ci.org/IvanKozlov95/libft.svg?branch=master)](https://travis-ci.org/IvanKozlov95/libft)

### TOC

## What is libft?
[Libft][1] is an individual project at [42][2] that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

Disclaimer: *Reinventing the wheel is bad, 42 makes us do this just so we can have a deeper understanding of data structures and basic algorithms. At 42 we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the program.*

## What is in it?

As it says in [Project's pdf][1], there are 4 setions:

1.  **Libc Functions:** Some of the standard C functions.
2.  **Additional functions:** Functions 42 deems will be useful for later projects.
3.  **Bonus Functions:** Functions 42 deems will be useful for linked list manipulation.
4.  **Personal Functions:** Functions I believe will be useful later.

However, I've decided reorganize and comdined functions to several folders:

1. **chars:** Basic functions to work with _char_ type
2. **get_next_line:** GNL project integrated into libft for convenience. See [project page][GNL]
3. **math:** Basic math functions. (This part will be ~~probably~~ extended in the future). See [notes](#notes)
4. **memory:** Memory operations(allocation, freeing etc.)
5. **output:** Functions for printing output (except for ft_printf)
6. **ft_printf:** My implementation of printf functions. See [project page][printf]
7. **list:** Functions for manipulations with linked lists.
8. **matrix:** Functions for manipulation with generic matrix. See [notes](#notes)
9. **numbers:** Functions related to integer number types(shor, int etc.).
10. **strings:** Part of <string.h> functions and addition function I deemed useful to work with string.

## Example usage

* [get_next_line][GNL]
* [fillit](https://github.com/IvanKozlov95/fillit)
* [filler](https://github.com/IvanKozlov95/filler)
* [ft_printf][printf]
* [lem_in](https://github.com/IvanKozlov95/lem_in)

[1]: https://github.com/IvanKozlov95/libft/blob/master/libft.en.pdf
[2]: http://42.us.org "42 USA"
[GNL]: https://github.com/IvanKozlov95/get_next_line
[printf]: https://github.com/IvanKozlov95/ft_printf
