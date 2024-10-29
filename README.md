# C
02-05-2024

>## Intro

### syntex = set of rule for a code
### ASCLL - American Standard For Inform
### First released in 1972 by Dennis Ritenie 
### Sructure (or) procedural 
### pointer oriented 
---
>## COMPUTER TRANSLATER:
+ Assembley Level - Low Level (ALP - MOV A,B)
+ compiled - High Level (C, Java)
+ Interpreted - High Lvl (Python, Js)

---
> ## Structure

```c
#include <stdio.h> // header

int main () // function
{
    // body
}
```
### header (# - Preprocessor Detector)
```c
// # - first the c looks this code and perform 
// preprocessor copies the preprocessed code of stdio.h to our file

/* In C,  all lines that start with the pound (#) sign are called directives. These statements are processed by preprocessor program invoked by the compiler.

The #include directive tells the compiler to include a file and #include<stdio.h> tells the compiler to include the header file for the Standard Input Output file which contains declarations of all the standard input/output library functions.*/

#include<stdio.h>
```
`stddef.h – Defines several useful types and macros`

`stdint.h – Defines exact width integer types`

`stdio.h – Defines core input and output functions`

`stdlib.h – Defines numeric conversion functions` `pseudo-random number generator, and memory allocation`

`string.h – Defines string handling functions`

`math.h – Defines common mathematical functions`

### + function (function data type with data name )
```c
// example of function

// int div(//data type of arg and name of arg)
int div(int a, int b)

int main()

/* n C++, both fun() and fun(void) are same.
So the difference is, in C, int main() can be called with any number of arguments, but int main(void) can only be called without any argument. Although it doesn’t make any difference most of the times, using “int main(void)” is a recommended practice in C.*/

#include <stdio.h>
int main()
{
	static int i = 5;
	if (--i) {
		printf("%d", i);
		main(10);
	}
}

--> output = 4321

#include <stdio.h>
int main(void)
{
	static int i = 5;
	if (--i) {
		printf("%d", i);
		main(10);
	}
}
---> output = error
```
### + function body - code
```c
{
    //we can declare variables( name is called identifier)
    //we can do control flow (conditions, looping)
    //a statement is always terminated by a semicolon (;)
    // manipulations, searching, sorting, printing, etc

}
```
---

> # Most Important Features of C Language

- Procedural Language
- Fast and Efficient
- Modularity
- Statically Type
- General-Purpose Language
- Rich set of built-in Operators
- Libraries with Rich Functions
- Middle-Level Language
- Portability
- Easy to Extend

---

> # Compiling a C Program: Behind the Scenes

### Step 1: Creating a C Source File (.c)
### Step 2: Compiling using GCC compiler
- Pre-processing (.i)
-`Removal of Comments`,`Expansion of Macros`,`Expansion of the included files`,`Conditional compilation`
- Compilation (.s)
- Assembly (.o)
- Linking(executable)

### Step 3: Executing the program

---

> # C Comments

### Single-line comment `//`

### Multi-line comment `/* */`

---

> # Tokens in C - basic

### + The smallest individual element of the C programming language that is meaningful to the compiler

## Types of Tokens in C
- Keywords
- Identifiers
- Constants
- Strings
- Special Symbols
- Operators

## 1. keywords in c

### + reserved word we can't use this words as identifiers

### + 32 reserved words
`auto` `break` `case` `char` `const` `continue` `default` `do` `double` `else` `enum` `extern` `float` `for` `goto` `if` `int` `long` `register` `return` `short` `signed` `sizeof` `static` `struct` `switch` `typedef` `union` `unsigned` `void` `volatile` `while`

## 2.Identifiers in c

### + Naming of variables, functions, and arrays
### + User-defined names consisting of an arbitrarily long sequence of letters and digits with either a letter or the underscore(_) as a first character
### +  cannot use keywords as identifiers
### + A special identifier called a statement label can be used in goto statements

## 3. Constants
- variables with fixed values
- values can not be modified in the program once they are defined\
- it maybe any of the data types

``` const int c_var = 20; and const int* const ptr = &c_var;```

## 4.Special Symbols

- ``` Brackets[] ``` as array element references , indicate single and multidimensional subscripts

- ```Parentheses()``` function calls and function parameters

- ```Braces{}``` start and end of a block of code containing more than one executable statement

- ```Comma (, )``` separate more than one statement like for separating parameters in function calls

- ```Colon(:)``` essentially invokes something called an initialization list
- ```Semicolon(;)``` statement terminator - end of one logical entity

- ```Asterisk (*)``` create a pointer variable and for the multiplication of variables

- ```Assignment operator(=)```assign values and for logical operation validation

- ```Pre-processor (#)```  macro processor that is used automatically by the compiler to transform your program before actual compilation

- ```Period (.)``` access members of a structure or union

- ```Tilde(~)``` Bitwise One’s Complement Operator

## 6. Operators

### + unary operators(1)

- Unary ---> increment `++` decrement `--` 

### + Binary operators(2)

- Arithmetic `+` `-` `/` `*` `%`
- Relational `<` `>` `<=` `=>` `==` `!=`
- Logical `&&` `||` `!`
- Bitwise `&` `|` `<<` `>>` `~` `^`
- assignment `=` `+=` `-=` `*=` `/=` `%=`

### + Ternary(3)

- conditio or tenary `(condition) ? if : else;`
```c
#include <stdio.h>
int main(){
	int a = 1, b=2, c=3;

	int max = (a>b)? // if
			//True	(a>c)?// if
					a:// True
					c:// False
			//False (b>c)?
					b:// True
					c;// False
	printf("%d",max);
}
```

## + sign bit(`0 ---> (+) posisitve`, `1 ---> (-) negative`) 

## + Unsigned

 ---

> ## looping and condition

## while
```
while (0)---> false
while (892)---> true(any number)
```
## do while
```c
do{
	//operation
}while(/*condition*/);

```
---

> # Function

## what and why function?
+ Block of code 
+ modularity
+ reusability
+ convenient to use

## Types of function

### standard library function
- pre defined functions
- stdio.h - printf(), scanf()
```
math.h - floor, ceil , round, sqrt...

example : 
floor(5.6) -
floor(5.8) -
ceil(1.2) -
ceil(-5.4) -
round(5.4) -
round(5.5) -
round(5.6)-
```
- string.h - strcpy, strcmp...

### user-define functions
+ written by c programmer (user who writes code).
+ four type of udf

### -Parts of a function

- Function declaration - Not needed if function definition is written in above main.
- Function call - call by value, call by reference
- Function Definition

### -General form of singnature or prototype(stucture)
```c
// # <return type> <function name>(type args){}
two type of args
- actual (used in the main function)
- formal (used in user define function)
// # return type - output mapped 
// # arguments - input mapped


#include<stdio.h>
// function creation

int add(int a, int b){
    return a + b;
}

int main(){
    int a = 10 ,b =3;
    printf("%d",add(a,b));
    return 0 ;
}

#include<stdio.h>
int add(int a, int b);

int main(){
    int a = 10 ,b =3;
    printf("%d",add(a,b));
    return 0 ;
}

int add(int a, int b){
    return a + b;
}

```

### - General form 











---
> # Pointer

## what is pointer?
- pointer is a variable
- stores address of another variable 
## Pointer operators
- operators ``` &```
```
- binary operator(and)
- unery (&)
- scanf("%d",&a);
```
- operator ```*```
```
- multipl
- declare data type
- dereferencing
```

## Pointer Data type
- int*
- double*
- float*
- char*
- void* (Dynamic memory allocation)
- memory space ```16 bit - 2 byte```, ``` 32 bit - 4 byte```, ```64 bit - 8 byte```

## How to use Pointer in program?
- use - ```int* a;```, ```int * a;```,``` int *a;```

Example:
```c
int *a,b,c; //only *a is a pointer variable b ,c is a variable
int *a,* b, * c; // this all are p.v
```

## Pointers and function
- Call/pass by reference

## Pointers Arithmetic
```c
#include<stdio.h>
int main(){
	int a = 10;
	int* d = &a;
	void* c =&c;
	// print the value 'a'
	printf("%d",*d);
	// print the address of 'd'
	printf("%p",d);
	//type costing
	printf("%d",*((int*)c));

} 
```

## Void Pointer
- universal
- by typecasting we get value


## Null Pointer 
- Null

## Pointer to Pointer 
- we can use upto 12
```c
#include<stdio.h>
int main(){
    int a =10;
    int * c=&a;
    int ** d=&c;
    int *** e=&d;

    printf("%d\n",*c);
    printf("%d\n",c);
    printf("%p\n",c);
    
    printf("%d\n",**d);
    printf("%d\n",d);
    printf("%p\n",d);

    printf("%d\n",***e);
    printf("%d\n",e);
    printf("%p\n",e);
    //print the address of previous
    printf("value %d\n",***e);// 10
    printf("a address%d\n",**e);// a address
    printf("d address%d\n",*e);// d address
    printf("e address%d\n",e);// a address

}

```

## Format Specifiers
- dangling effect 

## Returning an address from function


> # Array


### what is array?
- store value of same data type
- we can't change or update the size of an array after declaration
- unassigned indices store garbage values
- continuous store of val

### Type
- 1D Array
- multidimension array ``` 2D```,``` 3D```,``` nD...```
### 
## 1D Array
```c
//array
// 1) 1D array

#include<stdio.h>
int main(){
    int arr[10];
    int sum=0;

    for (int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<10;i++){
        sum+=arr[i];
        printf("%d ",arr[i]);
        printf("%d ",sum);

    }
}
```

## Implementation of array
- initial ``` int arr[size] ```
- retrive value by index or by address

## static,fixed, compile time mem allocation

## dynamic/ runtime memory allocation 
- memory management
- runtime memory allocation
### + dynamic memory allocation
``` <stdlib.h>```
- malloc
``` 
- it allocate memory to the heap memory in 'runtime' 
- malloc(10) - allocate 10 byte in heap
- return void pointer (void*) ---> type casting by pointer variable

ex: int * a = (int*) malloc(10) 
```
- calloc
- realloc
- free

## 2D array
### creating a 2D array dynamically
```c
*arr = (int *)malloc(r * c * sizeof(int)); 
```

```c 
int *arr[r];
    for (i=0; i<r; i++)
        arr[i] = (int *)malloc(c * sizeof(int));
``` 

``` c
int **arr = (int **)malloc(r * sizeof(int *));
for (i=0; i<r; i++)
   arr[i] = (int *)malloc(c * sizeof(int));
```
> # strings

## datatype
## IO Staatement
### Formatted
### unformatted
## String array
## Built in functions

- string.h (strlen(), strcmp(), strcat()...)
- ctype.h ( toupper(),tolower()...)
## String and Functions

> # Recursion

- call it's copy

## Purpose
### - Resuability
- lopping
- function call
- Recursion

## Prerequistics
- Discrete math ``` ex: f(n)=f(n-1)+f(n-2) ```
## Problems solved using recursion
- Divede and conquer
- Backtracking
- Branch and Bound

## Working 
- base condition 
- recursive function
``` if (n==1) : return else:(n-1)```

