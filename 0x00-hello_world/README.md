## Short description of the functions of the following script:

- **"The 0-preprocessor script"** writes a script that runs a C file through the preprocessor and save the result into another file.
  - The C file name is saved in the variable $CFILE.
  - The output is saved in the file c. 

- **"The 1-compiler script"** writes a script that compiles a C file but does not link.
  - The C file name will be saved in the variable $CFILE
  - The output file is named the same as the C file, but with the extension .o instead of .c

- **"The 2-assembler script"** writes a script that generates the assembly code of a C code and save it in an output file.
  - The C file name is saved in the variable $CFILE.
  - The output file is named the same as the C file, but with the extension .s instead of .c

- **"The 3-name c file"** writes a script that compiles a C file and creates an executable named cisfun.
  - The C file name is saved in the variable $CFILE.

- **"The 5-printf.c file"** writes a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

- **"The 6-size.c file"** writes a C program that prints the size of various types on the computer it is compiled and run on.

- **"The 100-intel script"** writes a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
  - The C file name is saved in the variable $CFILE.
  - The output file is named the same as the C file, but with the extension .s instead of .c

- **"The 101-quote.c script"** writes a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
  - With no functions listed in the NAME section of the man (3) printf or man (3) puts
  - Program returns 1
  - Program compiles without any warnings when using the -Wall gcc option
