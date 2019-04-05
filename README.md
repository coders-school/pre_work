# C++ training pre-work
The project is configured to run on both Windows and Linux OS.
We assume that you use Windows. Necessary software:
- CLion (your company should provide you with a license key)
- MinGW (g++, cmake, make)

## Software installation for Windows
- Please refer to this [video instruction on YouTube](https://www.youtube.com/watch?v=neg4zt5mIwk)
- [Download and install CLion for Windows](https://www.jetbrains.com/clion/download/#section=windows)
- [Download and install MinGW](https://mingw-w64.org/doku.php/download/mingw-builds)

## Software installation for Linux
For Linux please install:
- CLion
- g++
- valgrind
- cmake
- make

## Possible problems on Windows
If you can build `NumberGenerators` target, but you cannot build `NumberGenerators-ut` target it probably means that MinGW does not properly support exceptions on your machine. Please reinstall MinGW and select another type of exception implementation in `Exception` field.

If MinGW is problematic on your machine, feel free to use MSVC compiler. In fact, compiler type does not really matter. Just make sure it supports C++14.

Also if CLion is problematic, you can use Visual Studio 2015 Express.

You need to be able to compile both `NumberGenerators` and `NumberGenerators-ut` targets. We will be using similar build configurations in our training.

## Assignment
1. Optional: Fork this repository to your own GitHub account (if you have one).
2. Compile binary and unit tests in CLion. Select proper target, Ctrl+F9 compiles, Shift+F10 runs a chosen target. Steps for manual compilation in console with CMake:
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

