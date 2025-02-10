# What is this?

A calculator (kernel?) coded in C (what most calculators support). It includes the core of the project and a CLI to emulate it on your personal computer.

# How to use

To make this software compatible with your calculator, you have to include the libraries needed by the calculator and replace some functions within this code appropriate to your calculator.

# How to emulate (WIP)

# Can i port this to C++?

Yes, you can port this project to C++ if you have the necessary libraries installed (the ones that are included in this project which should come by standard).
It is not recommended though as this code is designed to run on a C framework and might have some issues regarding some blocks of code.

# TODO

- Add memory checks in calculations to prevent calculator from overflowing (crashing).
- Add support for most calculators using pragma.
- Add support for multiple functions that are also present in normal calculators.

# How to build
To build this, simply CD into the main directory (Calculator-C-Kernel) and run the following (this requires CMake to be installed):
```
cmake . -B out/build/GCC
cmake --build out/build/GCC
```
This builds it and compiles the program into an executable. You can also compile it with Visual Studio afterwards since gcc leaves a sln file.
Follow the instructions given in release to run this.
I will hopefully add a tutorial on how to flash this on a calculator.

# Credits

@synapsesoftworksllc - Making the core of this project.
