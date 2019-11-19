# C++ training pre-work
The project is configured to run on Windows, Linux and MacOS. It uses CMake >= 3.2
We assume that you use Windows. Necessary software:
- CLion (your company should provide you with a license key)
- MinGW (g++, cmake, make)

## Software installation for Windows
- Download and install your favourite IDE - CLion, VS Code (free), QtCreator (free) or any other that can handle CMake builds
- Download MinGW compiler (g++, make, cmake, gdb)
or 
- Download and install Visual Studio (IDE + MSVC compiler)

## Software installation for Linux
For Linux please install:
- your favourite IDE CLion (paid), VS Code (free), QtCreator (free), vim (free :D) or any other that can handle CMake builds
- g++ >= 7 or clang++ >= 5
- valgrind
- cmake >= 3.2
- make
- gdb
- binutils

## Possible problems on Windows
If you can build `NumberGenerators` target, but you cannot build `NumberGenerators-ut` target it probably means that MinGW does not properly support exceptions on your machine. Please reinstall MinGW and select another type of exception implementation in `Exception` field.

If MinGW is problematic on your machine, feel free to use MSVC compiler. In fact, compiler type does not really matter. Just make sure it supports C++17.

Also if CLion is problematic, you can use Visual Studio 2015 Express.

You need to be able to compile both `NumberGenerators` and `NumberGenerators-ut` targets. We will be using similar build configurations in our training.

## Assignment
1. Optional: Fork this repository to your own GitHub account (if you have one).
2. Compile the binary and unit tests. Steps for manual compilation in console with CMake:
  ```
  > mkdir build
  > cd build
  > cmake ..
  > make
  ```
3. Run `NumberGenerators` target. `Result: 42` should be displayed on the output.
4. Run `NumberGenerators-ut` target.
5. Fix mistakes in unit tests. In order to do that you need to implement `sumNumbersFromGenerators()` function to make all UTs pass. You can add more UTs if you wish.
6. Create a Pull Request to inform me about your successful implementation and environment setup. If you do not have and do not want to have a GitHub account just send me your solution (diff only) via email to *lukasz@coders.school*
