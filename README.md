# C Programming

+ Released in 1972, by Dennis Ritenie
+ procedural lang (Sequence of execution) 
+ structured lang (A predefined structure)

---
## Header Files

### `# - Preprocessor Detector`
to indicate the compiler to replace it with code during compiler

---
## Structure

```c

#include <stdio.h> // Header File
// Return datatype  | Fn Name 
int main() {

// CONDITIONAL STATEMENTS

if(condition){

} else{

}

switch(condition){
    case a:
        break;
    case b:
        break;
    default:
        break;
}

// LOOPs




return; // Termination point
}
```

---
## Keywords

`int` `float` `char` `true` `false` `return` `if` `else` `switch` `case` `default` `break` `continue` `for` `while` `do` `const` `void` `double` `enum` `struct` `union` `malloc`

---

## Compiler Journey

Header file > header code inclusion > main functions > external functions > return 

---

## Datatypes

### Primitive

`int` `float` `char` `void` `double`

### Derived 

`array` `pointer`

### User Defined

`struct` `union` `enum`

---

## Operators in c

### Arithmetic `+` `-` `/` `*` `%`

### Logical `&&` `!` `||`

### In/de-crement `++` `--`

### bitwise

### Ternary `condition ? if_true : if_false`




---
## Format S



linker - header system files + user defined 
preprocessor > compiler .i> assembler .obj> linker


LOADER - loading into main memory RAM
ADD.exe
then executer into CPU


main.c
PREPROCESSOR - 
COMPILER     - > obj
ASSEMBLER    - 
LINKER       - 
LOADER       - 




memory

4 bytes for a int

0 sign-bit (1 -ve, 0 +ve)
0 - 1,073,741,824
0 -   536,870,912
0 -   268,435,456
0 -   134,217,728
0 -    67,108,864
0 -    33,554,432
0 -    16,777,216
0 -     8,388,608
0 -     4,194,304
0 -     2,097,152
0 -     1,048,576
0 -       524,288
0 -       262,144
0 -       131,072
0 -        65,536
0 -        32,768
0 -        16,384
0 -         8,192
0 -         4,096
0 -         2,048
0 -         1,024
0 -           512
0 -           256
0 -           128
0 -            64
0 -            32
0 -            16
0 -             8
0 -             4
0 -             2
0 -             1
a - 2,147,483,647  