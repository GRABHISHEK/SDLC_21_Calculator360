# Getting Started with Calculator360

## Installing the dependencies

To run the program, you would require two additional dependecies

1. GCC compiler

- For Windows users,
  Install [Mingw64](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/mingw-w64-install.exe/download) and add the path to your environment variable.
- For Linux users, Run the following command in your terminal.

```console
    sudo apt-get update
    sudo apt-get upgrade
    sudo apt-get install build-essential
```

1. Make

- For Windows users,
  Install make from [Make Installer](https://sourceforge.net/projects/gnuwin32/files/make/3.81/make-3.81.exe/download?use_mirror=webwerks&download=)
- For Linux users, Run the following command in your terminal

```console
sudo apt-get install cmake
```

## Running the program

1. Once you have downloaded the dependencies required, clone this github repository.
2. Next, Open up the terminal console and run the `make` command in the terminal.

   The program is now compiled and ready to run! :tada:

3. You can run the program in two ways:-

   - Run the `make run` command to access the program from the terminal.
   - Another way is to go to the 4_Implementation folder in the cloned project directory and look for the calculator360.exe/calculator360.out file. Run the program directly from this file

4. If you wish to remove all the compiled and build files, Use the `make clean` command.

## Advanced Guide

To verify and check more about the sources and testing, run the following commands:-

-  `make test` - To verify and test the program.
-  `make static` - To run a static code analysis.
-  `make memoryleak` - To run a dynamic code analysis.
-  `make coverage` - To check the test coverage.
-  `make doc`- To generate a documentation report.
