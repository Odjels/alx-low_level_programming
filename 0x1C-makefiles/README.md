# C - Makefiles

In this project, I practiced writing Makefiles.

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files.

## Helper Files :raised_hands:

* [school.c](./school.c): C function that displays a seahorse in text.
Used for Makefile practice purposes throughout project.

* [main.c](./main.c): Main C function that runs the function defined in
[school.c](./school.c).

## Header File :file_folder:

* [m.h](./m.h): Header file defining the function prototype used in `school.c`.

## Tasks :page_with_curl:

* **0. make -f 0-Makefile**
  * [0-Makefile](./0-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Includes:
    * Rule `all` that builds the executable.

* **1. make -f 1-Makefile**
  * [1-Makefile](./1-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Builds on [0-Makefile](./0-Makefile)
  with:
    * Variable `CC` that defines the compiler to be used.
    * Variable `SRC` that defines the `.c` files to compile.
    * The `all` rule only recompiles updated source files.

