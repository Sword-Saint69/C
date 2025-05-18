1) Explain how characters are stored and processed in C. (4 Marks)
In C, characters are stored as integer values according to the ASCII (American Standard Code for Information Interchange) encoding. Each character constant is enclosed in single quotes (e.g., 'A', 'b', '3') and is internally represented by its corresponding ASCII value (e.g., 'A' is 65). The char data type is used to store characters, typically occupying 1 byte (8 bits) of memory. Characters can be processed using standard operators and functions, and since they are stored as integers, arithmetic operations can be performed on them.

2) Describe the structure of a C program. List out the features of C Language. (3 Marks)
A typical C program structure includes:

Documentation section (comments)
Preprocessor directives (e.g., #include <stdio.h>)
Global variable declarations
Function declarations
The main() function (entry point)
User-defined functions
Features of C Language:

Simple and easy to learn
Structured programming language
Rich set of built-in operators and functions
Supports low-level (bitwise) operations
Portable and efficient
Extensible (allows user-defined functions)
Supports pointers and dynamic memory allocation
3) Describe the fundamental data-types in C. (5 Marks)
The fundamental (basic) data types in C are:

int: Used to store integers (e.g., 10, -5)
float: Used to store single-precision floating-point numbers (e.g., 3.14)
double: Used for double-precision floating-point numbers (e.g., 3.141592)
char: Used to store single characters (e.g., 'A', 'z')
void: Represents the absence of value, mainly used for functions that do not return a value
4) How do you declare constants in C? (3 Marks)
Constants in C can be declared in two ways:

Using the #define preprocessor directive:
#define PI 3.14159
Using the const keyword:
const int MAX = 100;
5) Differentiate between keywords and identifiers. (3 Marks)

Keywords are reserved words predefined by the C language (e.g., int, return, if). They have special meanings and cannot be used as names for variables or functions.
Identifiers are user-defined names for variables, functions, arrays, etc. (e.g., total, main). They must follow certain naming rules and cannot be keywords.
6) Describe the four data-type qualifiers in C. (3 Marks)
The four data-type qualifiers in C are:

const: Makes a variable's value unchangeable after initialization.
volatile: Tells the compiler that a variable's value may change at any time, preventing optimization.
signed: Specifies that a variable can hold both positive and negative values (default for int).
unsigned: Specifies that a variable can only hold non-negative values.
7) What are the keywords in C? What restrictions apply to their use? (2 Marks)
Keywords are reserved words with special meaning in C (e.g., int, float, if, else, while, return, for, break, continue, switch, case, default, void, char, double, struct, typedef, enum, const, unsigned, signed, volatile, static, extern, auto, register, goto, sizeof, do, union).
Restrictions:

Keywords cannot be used as identifiers (variable, function, or other user-defined names).
8) Explain enum datatype in C with example. (3 Marks)
The enum (enumeration) data type allows the creation of user-defined types consisting of named integer constants.
Example:

enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
enum week today;
today = Wednesday;
Here, Sunday is 0, Monday is 1, ..., Saturday is 6 by default.

9) How will you declare variables using enumerated data type? Explain with an example. (3 Marks)
You declare an enum variable as follows:

enum color {RED, GREEN, BLUE};
enum color myColor;
myColor = GREEN;
Here, myColor is a variable of type enum color and can take any value defined in the enumeration.

10) What are enumerated data types? How ordinal values are assigned to its members? (3 Marks)
Enumerated data types (enum) are user-defined types consisting of a set of named integer constants. Ordinal values are assigned starting from 0 by default, incrementing by 1 for each subsequent member. You can also explicitly assign values:

enum days {SUN=1, MON, TUE=5, WED, THU, FRI, SAT};
Here, SUN=1, MON=2, TUE=5, WED=6, etc.

11) Explain the purpose of typedef construct. (2 Marks)
The typedef construct is used to create new names (aliases) for existing data types, making code more readable and easier to manage.
Example:

typedef unsigned long int ULONG;
ULONG a, b;
12) What are identifiers? Give the rules for forming identifiers in C. (3 Marks)
Identifiers are names given to variables, functions, arrays, etc., by the programmer.
Rules:

Must begin with a letter (A-Z, a-z) or underscore (_)
Can contain letters, digits (0-9), and underscores
Cannot use keywords
Case-sensitive
No spaces or special characters (except underscore)
