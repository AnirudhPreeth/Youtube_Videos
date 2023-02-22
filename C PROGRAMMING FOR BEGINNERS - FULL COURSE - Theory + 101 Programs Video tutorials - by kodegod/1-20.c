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

//2. Addition. 
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enter number 1:");
    scanf("%d", &a);
    printf("Enter number 2:", &b);
    scanf("%d", &b);
    c = a+b;
    printf("Addition of the two numbers is: %d", c);
    return 0;
}

//3. Subtraction. 
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enter number 1:");
    scanf("%d", &a);
    printf("Enter number 2:", &b);
    scanf("%d", &b);
    c = a-b;
    printf("Subtraction of the two numbers is: %d", c);
    return 0;
}

//4. Multiplication.  
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enter number 1:");
    scanf("%d", &a);
    printf("Enter number 2:", &b);
    scanf("%d", &b);
    c = a*b;
    printf("Multiplication of the two numbers is: %d", c);
    return 0;
}

//5. Division.
#include <stdio.h>
#include <conio.h>
int main()
{
    float a, b, c;
    printf("Enter number 1:");
    scanf("%f", &a);
    printf("Enter number 2:", &b);
    scanf("%f", &b);
    c = a/b;
    printf("Division of the two numbers is: %f", c);
    return 0;
}

/*
int / int => int
int / float => float
float / int => float
float / float => float
*/

//6. Area of a circle = pi*r*r (r-squared).
#include <stdio.h>
#include <conio.h>
int main()
{
    float AREA, R;
    printf("Enter Radius: ");
    scanf("%f", &R);
    AREA = 3.14*R*R;
    printf("Area of the given circle is: %2f", AREA);
    return 0;
}

//7. Area(Triangle) = 1/2*b*h.
#include <stdio.h>
#include <conio.h>
int main()
{
    float AREA, B, H;
    printf("Enter Base and Height: ");
    scanf("%f%f", &B, &H);
    AREA = 0.15*B*H;
    printf("Area of the given triangle is: %6.2f", AREA);
    return 0;
}

//8. Calculate Simple Interest -> P*N*R/100.
#include <stdio.h>
#include <conio.h>
int main()
{
    float SI, P, N, R;
    printf("Enter values of P, N, R: ");
    scanf("%f%f%f", &P, &N, &R);
    SI = (P*N*R)/ 100;
    printf("Simple Interest: %6.2f", SI);
    return 0;
}

//9. Find square and cube. 
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, square, cube;
    printf("Enter the number: ");
    scanf("%d", &n);
    square = n*n;
    cube = n*n*n;
    printf("The Square is: %d and Cube is: %d", square, cube);
    return 0;
}

//10. Calculate the total average - Total=m1+m2+m3, Average = Total/3.
#include <stdio.h>
#include <conio.h>
int main()
{
    int roll_no, m1, m2, m3, total;
    float average;
    printf("Enter roll no: ");
    scanf("%d", &roll_no);
    printf("Enter Marks 1, Marks 2, Marks 3: ");
    scanf("%d%d%d", &m1, &m2, &m3);
    total = m1+m2+m3;
    average = total/3.0;
    printf("\nStudent Roll No: %d", roll_no);
    printf("\nMarks 1: %d, \nMarks 2: %d, \nMarks 3: %d", m1, m2, m3);
    printf("\nTotal: %d", total);
    printf("\nAverage: %f", average);
    return 0;
}

//11. Swap two numbers.
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, temp;
    printf("Enter the two numbers: ");
    scanf("%d%d", &a, &b);
    printf("\nBefore Swapping..\na=%d, b=%d", a, b);
    temp =a;
    a =b;
    b =temp;
    printf("After swapping...\na=%d, b=%d", a,b);
    return 0;
}

/*
Escape Sequences -
\n - New Line.
\t - Tab(Horizontal).
\\ - Backlash.
\' - Single Quote.
\" - Double Quote.
\? - Question Mark.
\b - Backspace.
\0 - Null. 

Escape Sequences are those which contains a backslash (\) symbol followed by one of the escape sequence characters.
*/

//12. Simple program to understand escape sequence. 
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("http:\\\\www.kodegod.com\\learn-programming");
    return 0;
}

// In the above program for a single \ we do \\ and for the other one, we do another \\. Hence \\\\.

//13. Draw a simple tree using escape sequences. 
#include<stdio.h>
#include<conio.h>
int main()
{
    printf("\n");
    printf(" /\\ \n");
    printf(" //\\\\ \n");
    printf(" ///\\\\\\ \n");
    printf("////\\\\\\\\ \n");
    printf(" ||| \n");
    printf(" ||| \n");
    return 0;
}

/*
Decision Control Structures - 
Condition is either true or false. 
Valid conditions -
A>B
A>10
0  - False.
1  - True. 

if statement -
if (condition)
{
    instruction 1; 
    instruction 2;
    ...
}
OR
if (condition)
  instruction 1;

if...else statement - 
if (condition)
{
    instruction 1;
    instruction 2;
    ...
}
else
{
    instruction 3;
    instruction 4;
    ...
}
OR
if (condition)
  instruction 1;
else
  instruction 2;

if...else if...else
if (condition)
{
    instruction 1;
    instruction 2;
    ...
}
else if(condition)
{
    instruction 3;
    instruction 4;
    ...
}
else 
{
    instruction 5;
    instruction 6;
    ...
}
OR
if (condition)
  instruction 1;
else if(condition)
  instruction 2;
else 
  instruction 3;
*/

//14. Find the largest of two numbers. 
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("Enter the numbers: ");
    scanf("%d%d", &a, &b);
    if(a>b)
    printf("Largest value is ...%d", a);
    else 
    printf("Largest value is ...%d", b);
    return 0;
}

//15. Check whether number is positive or negative. 
#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter the number...");
    scanf("%d", &n);
    if(n>0)
       printf("Given number is positive.");
    else if(n>0)
       printf("Given number is negative.");
    else
       printf("Given number is 0.");
    return 0;
}

//16. Check whether number is greater than or lesser than 10. 
#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter the number...");
    scanf("%d", &n);
    if(n>10)
      printf("Number is greater than 10.");
    else if(n<10)
      printf("Number is lesser than 10.");
    else
      printf("Number is 10.");
    return 0;
}

//17. Check whether number is even or odd. 

#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("");
    return 0;
}