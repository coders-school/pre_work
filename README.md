# C++ training pre-work

The project is configured to run on Windows, Linux and macOS. It uses CMake >= 3.6

## Software for remote sessions

I recommend using **Visual Studio Code** with **Live Share Extension Pack** installed. It will allow us to have a remote Coding Dojo / Mob Programming session and to have an audio chat during this session. [Take a look at this extension in action](https://visualstudio.microsoft.com/pl/services/live-share/). In case you do not have it or do not want it, you will just have to do group tasks on your own.

## Docker 

You can use [this docker image](https://hub.docker.com/r/lukin1000/linux_toolset). It is Ubuntu-based Linux with all necessary applications installed. Full support of C++17 is provided.

```bash
docker pull lukin1000/linux_toolset
```

### Running a docker container

```bash
docker run -v ~/workspace/:/workspace -it lukin1000/linux_toolset:latest /bin/bash
```

Options:

* `-v /path/to/host/dir:/path/to/docker/dir` - directory mapping
* `-it` - allocate a new terminal session and keep stdin open even if not attached
* `lukin1000/linux_toolset:latest` - the name of image
* `/bin/bash` - the name of the command to be executed on the container. Bash simply gives you access to the terminal. 

It's useful to have an alias to the above command.

If you don't have docker please install the necessary software as described below.

## Software installation for Windows

- Download and install your favourite IDE - CLion, Visual Studio Code (free), QtCreator (free) or any other that can handle CMake builds
- Download MinGW compiler (g++, make, cmake, gdb)
or 
- Download and install Visual Studio Community Edition (IDE + MSVC compiler)

## Software installation for Linux/macOS

For Linux please install:
- your favourite IDE - CLion (paid), Visual Studio Code (free), QtCreator (free), vim or any other that can handle CMake builds
- g++ >= 7 or clang++ >= 5
- cmake >= 3.6
- make
- gdb
- binutils
- valgrind

## Online IDE

If you have any problems with setting up an environment you can use [Repl.it](https://repl.it). It is an online IDE that can handle multiple files projects and has a Linux terminal available.

## Possible problems on Windows

If you can build the `NumberGenerators` target, but you cannot build the `NumberGenerators-ut` target it probably means that MinGW does not properly support exceptions on your machine. Please reinstall MinGW and select another type of exception implementation in the `Exception` field.

If MinGW is problematic on your machine, feel free to use the MSVC compiler. Compiler type does not matter. Just make sure it supports C++17.

Also if CLion is problematic, you can use Visual Studio Community Edition.

You need to be able to compile both `NumberGenerators` and `NumberGenerators-ut` targets. We will be using similar build configurations in our training.

## Assignment

1. Optional: Fork this repository to your own GitHub account (if you have one).
2. Compile the binary and unit tests. Steps for manual compilation in console with CMake:

  ```bash
  > mkdir build
  > cd build
  > cmake ..
  > make
  ```

3. Run `NumberGenerators` target. `Result: 42` should be displayed on the output.
4. Run `NumberGenerators-ut` target.
5. Fix mistakes in unit tests. To do that you need to implement the `sumNumbersFromGenerators()` function to make all UTs pass. You can add more UTs if you wish.
6. Commit, push and create a Pull Request to inform me about your successful implementation and environment setup. If you do not have and do not want to have a GitHub account just send me your solution (diff only) via email to *lukasz@coders.school*

After completion of this assignment, you have everything set up and ready for training.
