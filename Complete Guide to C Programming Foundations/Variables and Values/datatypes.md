### C Datatypes
char    -   single characters or bytes
int     -   integer or whole-number values
float   -   real numbers, single precision (accurate to 8 digits)
double  -   real numbers, double precision (accurate to 16 digits)

These data types also have qualifiers which help refine the data type's scope.

### Datatypes Qualifiers
signed    -   The signed qualifier is the default, meaning that an integer value stores both positive and negative values.
unsigned  -   An unsigned qualifier means the integer stores only positive values.

### The void Datatype
The void data type is also available. Void for no data type or an undefined data type. This type comes into play for allocating memory and referencing functions that return no value or accept no arguments. 

### Note: 
* Unlike other programming languages, C has no text or string data type. Instead, an array of character variables represents a string. 

### Rules for naming variables
1. must start with a letter
2. can be snakecase
3. can be camelcase

4. must not be keywords and predefined functions

Note: Variables in C are not initialized to 0. 

### Exploring the printf() function 

[printf() vs puts()]
* printf is a versatile function that allows formatted output using format specifiers. It can print various data types (integers, floats, strings, etc.) and doesn't automatically add a newline character.
* puts is a simpler function specifically for printing strings. It takes a string as input, prints it to the standard output, and automatically appends a newline character.

* printf requires a format string and a variable number of arguments, depending on the format specifiers used.
* puts takes only one argument: the string to be printed.

* printf returns the number of characters written or a negative value if an error occurs. 
* puts returns a non-negative value on success and EOF on failure. 

* puts is generally slightly faster than printf because it performs fewer operations. However, the difference is usually negligible.


### Format Spercifiers
```
    %[options]n
```
* Prefixed by the % (percent) character
* Followed by optional characters to set output format, width, justification, etc.
* Conversion character comes last, matching the companion arguments data type

* Each conversion character has an argument inthe printf() function.
* The conversion character must match the argument's data type.

[common format specifiers]
    %d or %i:   Signed decimal integer
    %u:         Unsigned decimal integer
    %f:         Decimal floating-point
    %e or %E:   Scientific Notation
    %g or %G:   Floating Point or Scientific output for Larger Number
    %x:         Memory Size of size_t value
    %p:         Memory Address in Hexadecimal
    %c:         Single character
    %s:         String of characters
    %x or %X:   Unsigned hexadecimal integer
    %o:         Unsigned octal integer
    %%:         Literal % character (outputs the %character)

[Format specifiers can include optional flags, width, and precision components to control the output's formatting:]

Flags:
    -: Left-align the output within the specified width.
    +: Prefix positive numbers with a plus sign.
    0: Pad numbers with leading zeros.
    #: Alternate form; for example, prefix 0x for hexadecimal.
    (space): Prefix positive numbers with a space.

Width: Specifies the minimum number of characters to be printed.
Precision: For floating-point numbers, it specifies the number of digits after the decimal point; for strings, it limits the number of characters.


### Storage Class 
In C programming, storage classes define the scope, lifetime, and visibility of variables and functions within a program. They determine where a variable is stored, its initial value, and how long it persists during program execution. C provides four primary storage classes:
    1. Automatic Storage Class (auto)
    2. Register Storage Class (register)
    3. Static Storage Class (static)
    4. External Storage Class (extern)

Three keywords define the classes. 
1. An auto variable is local or private to the function in which it's defined. The value is released after the function quits. This is the default class. The keyword auto is optional when declaring a variable. 

2. Static variables are also local to their functions, but they retain their values after the function quits. 

3. An external variable exists outside of, or external to, a function. Its value is available to all functions. This type of variable is also known as a global variable.

### The typedef
Typedef is a keyword in C, C++, and Objective-C that creates a new name for an existing data type. It's also known as a type alias.

How it works
    * Typedef creates a synonym for a data type, not a new data type. 
    * Typedef declarations are interpreted similarly to variable or function declarations. 
    * Typedef declarations can be used to create shorter or more meaningful names for types. 
    * Typedef declarations can also encapsulate implementation details that may change. 

### Single Character in C

    Literal characters:      (e.g., 'A', 'z', '3').
    Escape sequences:        ('\t', '\n')
    Specific values:         (\x47)

### String Literals
    Character arrays are used as strings
    Contained within double quotes
    Everything between the double quotes is part of the string
    A double quote within a string must be escaped: \ "

    Strings terminate with the null character,
    The null character is added automatically to a string literal
    When manipulating strings in your code, use the nullcharacter terminator


### Typecast in C
Type casting in C, also known as type conversion, involves converting a value from one data type to another. 
It can be implicit (automatic) or explicit (manual). 