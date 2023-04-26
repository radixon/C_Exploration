# Chapter 2

## Section 2.1
### pun.c

In section 2.1, the goal is to find an IDE and properly preprocess, compile, and link a simple program. <br />
+ Preprocessing: The program is first given to a preprocessor, which obeys commands that begin with a directive, ie #include.
+ Compiling:  The compiler translates the program into machine instructions, object code.
+ Linking: The linker combines the object code produced by the compiler with any additional code needed to yield a complete executable program.

-------
The GCC compiler is a popular C compiler supplied with Linux distributions.

There are Linux-Compatible Environments and Compilers available.
* For Windows: Install Linux with WSL
* Apple macOS/OSX is based on the BSD version of UNIX; however, often developers use the Homebrew tool to install additional Linux-style utilities.
-------

![pun](https://user-images.githubusercontent.com/59415488/234639614-fd67de84-f808-4061-ad4e-43da9b8a66de.png)

## Section 2.2
### Directives

Before a C program is compiled, the program is edited by a preprocessor.  Commands intended for the preprocessor are directives. <br />

```C
  #include <stdio.h>
 ```
 
 This directive states that the information in <stdio.h> is to be "included" into the program before the program is compiled.  Directives always begin with a # character, which distinguishes directives from other items in a C program.  By default, directives are one line long. <br />
 
 ### Functions
 
Functions are the building blocks from which programs are constructed.  Functions fall into two categories: those written by the programmer and those provided as C library functions.  In C, a function is a series of statements grouped together and given a name.  A function that computes a value uses the return statement to specify what value is returned. <br />

A main function is required as part of any C program.  The main function returns a status code that is given to the operating system when the program terminates.<br />

### Statements

A statement is a command to be executed when the program runs.  C requires each statement end with a semicolon. <br />

### Comments

In C, information meant for documentation is placed in comments.  In C, comments are place betwent /*  and  */, and the comments can span multiple lines.

```C
/*  
    This is
    a comment.
*/
```

Single lin comments follow //

```C
// This is a comment.
```
