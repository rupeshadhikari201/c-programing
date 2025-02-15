
### History of C
1. Developed in the 1970s
2. Created by Dr. Brian Kernighan and Dr. Dennis Ritchie
3. Developed in conjunction with the Unix operating system
4. Based on the B language from Bell Labs

### The C Language
1. Mid-level programming language
2. Procedural language
3. Better way to write low-level machine code
4. Transferable between platforms

### Keywords
1. auto         
2. break             
3. case             
4. const
5. continue
6. default
7. do
8. double
9. float
10. for
11. goto
12. if
13. int
14. long
15. register
16. return
17. short
18. signed
19. sizeof
20. static
21. struct
22. switch
23. typedef
24. union
25. unsigned
26. void
27. volatile
28. while

### C Vocabulary
1. keywords
2. operators 
3. data types
4. expressions
5. functions

### Whitespaces
[whitespaces are used for readability]
1. tabs
2. spaces
3. blank lines

### Compile and Link
1. The compiler translates source code into object code
2. The linker combines object code with C libraries
3. The program is created

### The Compiler 
* Creates an object code file based on the source code file
* Object code file names end with the .o extension.
* Object code isn't a program, but rather tokens and shortcuts that help build the final program. The reason for this step is that a single program can be built from multiple object code files.


### The Preprocessor
The C pre-processor helps prepare a source code file for compiling. It uses pre-processor directives, instructions that are carried out before the source code is compiled to object code. These instructions are not C code, but they help compile the source code and can provide some handy shortcuts.

    Key Points:
    1. Traditionally are listed in the program first
    2. Can appear anywhere in the source code file
    3. Affected by comments: / * */ and //
    4. It starts with a #
    5. It ends with a newline and not semicolon (;)

Here are the 12, pre-processor directive. 


### #include directive
```
    #include <stdio.h>
```
For the include pre-processor directive used here, the argument is a file name enclosed in angle brackets. The include directive inserts the named file into the code at this spot. The .h files are header files required by items in the source code. 

* In Linux and similar operating systems, header files are found in the usr/include or usr/local/include directories. 

* In windows, the include directories are relative to the compiler's directory.

When angle brackets are used with the include directive, the compiler looks in the default directories. 
Otherwise, double quotes direct the pre-processor to search for the header file relative to the same directory as the source code file.
```
    #include <stdio.h>  [the header file is pulled from a default directory]
    #include "local.h"  [the file is obtained relative to the same directory as source code file]
```

### #define directive
```
    #define COUNT 10
    #define GREETING "Howdy do!"
    #define charout(a) putc(a, stdout)
```
The defined directive is used for substitution. Here, the defined constant COUNT is created. It references the value 10. This defined constant, the text COUNT, is expanded by the compiler throughout the code wherever it appears. 

A string literal defined constant expression is enclosed in double quotes. The double quotes are a part of the expression. Here the defined constant greeting is expanded into the string Howdy do, which includes the quotes.

As a substitution directive, define can also create macros as shown in this code at line three. The charout() macro is expanded to the putc() function shown here, both using argument A.


### Header Files Vs C Language Libraries
It's common for beginning C programmers to confuse header files with C language libraries. These are two different things. 
    
    * Header files are used in the source code  
    * Libraries are used by the linker. 

The header files are generally located in include directory inside of compiler location. 
The library files are generally located in lib directory inside of compiler location.