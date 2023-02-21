//C PROGRAMMING FOR BEGINNERS - FULL COURSE - Theory + 101 Programs Video tutorials - by kodegod
//https://www.youtube.com/watch?v=vl794HKeXug&ab_channel=kodegod

//Contains all the notes and information about the course.

//1-10. 

/*
C is founded in 1972.
Became popular because of features and speed. 
C Program uses a compiler - compiles code to convert it to Machine Language Code.
Machines can only understand Machine Language Code. 

Code block for C-Program -
#include<header_files>
.
.
int main()
{
    Line 1;
    Line 2;
    Line 3;
    .
    .
    return integer_values;
}

#include<header_files>
.
.
int main()
{
    Declaration statements;
    Decision control statements;
    Loops;
    Call to other functions;
    Special keywords;
    return integer_values;
}

Format specifiers -
%c - char single character
%d - integer
%f - float or double signed character
%e - float or double exponent character
%g - float or double use of %f or %e as required 
%o - int unsigned octal value
%p - pointer address stored in pointer
%s - array of char sequence of characters 
%u - int unsigned decimal
%x - (%X) int unsigned hex value

printf and scanf characters -
print("number %d, character %c, float value %f, marks, first_letter_name, value_of_pi);
scanf("%d, %c, %f", &marks, &first_letter_name, &value_of_pi)
Number - 10, Character - P, Float - 3.14.
*/

//1. Print kodegod.com 
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("\nKodegod.com");
    return 0;
}

/*
Character set and constants -
All alphabets (uppercase and lowercase), digits/decimal numbers, special symbols.
Primary constants (Integer, Real, Character), Secondary(Array, Pointer, Structure, Union, Enum).

Basic Datatypes -
int, float, char.

Variables - 
Must indicate what value it stores.
Ideally should be assigned some values at the time of declaration.
Must not contain any special character, but underscore is okay.
Must start with an alphabet or underscore.
Must not be a keyword.

Valid Variable names -
int roll_number
float pivalue
char o
int_Superkul

Invalid Variable names - 
int roll-number
float 3.142
char )
int if

Declaring a variable -
datatype variable_name1 = initial_value;
Example - int x; 
int y = 10;

Garbage values - do not initialize a variable. 
In y, when compiler allocates memory to y, it is also overwriting value with my initializer which is 10. 
In x, there is garbage value. 

Types of operators in C-
Arithmetic Operators, Increment and Decrement Operators, Assignment Operators, Relational Operators, Logical Operators, Conditional Operators...
..., Bitwise Operators, Special Operators. 
Assignment Operators - 
=, +=, -=
Arithmetic Operators -
+, -, *, /, %
% is modular division. 

Arithmetic Instructions -
C = A+B
C = A-B
C = A*B
C = A/B
C = A%B
*/

//2. 