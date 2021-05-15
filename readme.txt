Hi!

This assignment is about implementing a small library.

======== Overview: ========
There are 4 files that provide a skeleton for you to start from:

- CMakeLists.txt
  Contains the build information. If you are not familiar with cmake, you can also write a simple makefile.

- main.cpp
  A dummy application with some very simple test cases for the library functions. Think of it as a test suite.

- lib.h and lib.cpp
  Contain the declarations and definitions for three functions.


======== Build and run: ========
In order to build the library and run the test suite, create a build dir, then run cmake and make inside.

Running the program as is will fail, since the library is not implemented yet.
During development, simply call "make" again to recompile the "main" executable.

The choice of compiler and cpp standard are up to you.


======== The task: ========
There are tree functions to be implemented in lib.cpp:
- transpose_in_place
- transpose_into_buffer
- best_hamming_distance

main.cpp contains a brief description, example data and expected results for each of them.

While implementing them you should not only showcase your algorithms skills. Since we need to certify our product,
all code will be audited externally. Thus readability, documentation and robustness are paramount.

You are free to change the test cases in main.cpp as well as modifying the CMakeLists.txt to e.g. add compiler flags.

Also, if you think that something is underspecified or you are missing information, feel free to make an assumption.
When handing in the assignment, please state which assumptions you made, and if applicable why.


======== Handing in the assignment: ========
Please attach all files required to build the project with your modifications. Also, please provide a high level
description of important design decisions and changes you made.

Thank you for your cooperation :)