# C Language Practise
This is a basic practise project for c language

## 01.CONSTANTS

#### Instructions

- Type declaration = to declare the type instruction of variable.
- Input/output = supply input data obtaining the output result.
- Arithmetic instruction  = to perform arithmetic operation between constants and variables.
- Control intstruction = Sequence of execution of various statements.

#### Keywords

auto, double, if, static, break, else, int, struct, case, enum, long, switch, char, extern, near, typedef, const, float, resister, union, continue, far, return, unsigned, default, for, short, void, do, goto, signed, while

#### Constants
1. Primary Constant  
    1. Integer contants
    2. Real contants
    3. Character contants
2. Secondary Constant  
    1. Array
    2. Pointer
    3. Union
    4. Enum

#### HIERARCHY OF LOGICAL OPERATORS
1. ```!```	        =	    Logical Not
2. ```* / %```		=	    Arithmetic and Modulus
3. ```+ -```        =	    Arithmetic
4. ```< > <= >=```  =	    Relational
5. ```== !=```		=	    Relational
6. ```&&```		    =	    Logical And
7. ```||```		    =	    Logical OR
8. ```=``` 		    =	    Assignment

#### PRIORITY OPERATORS DESCRIPTION
1. ```* / %```		=	Multiply, division, modulus.
2. ```+ -```		=	Add, Subtract.
3. ```=```		=	assignment.

#### RULES FOR CONSTRUCTING (CHARACTER CONSTANTS)
- A Single alphabet/ single digit/ single special symbol enclosed single inverted commas both side.   
- Maximum length is one character.

EX:- 'A' , 'I' , '5' , '=' .

#### RULES FOR CONSTRUCTING (INTEGER CONSTANSTS)
- At least one digit.
- Not have decimal point.
- Positive or negative.
- No sign/assumed to be positive.
- No commas or blanks between.
- Range = -32768 to +32767.

EX:- 426, +782, -8000.

#### RULES FOR CONSTRUCTING (REAL CONSTANTS)
- REAL CONSTANTS = FLOATING POINT CONSTANTS.

- WRITTEN FORMS:
	- Fractional form.
	- Exponential form.

- RULES(FRACTIONAL FORM):-
	- Atleast one digit.
	- Have a decimal point.
	- Positive or negative.
	- Default sign is positive.
	- No commas or blanks between.

EX:- +325.34, 426.0, -32.76.

- RULES(EXPONENTIAL FORM):-
	- The mantissa part or the exponential part separated.
	- Mantissa part have positive or negative sign.
	- Default sign is positive Mantissa
	- One digit/exponent/positive or negative integer.
	- Default = positive.
	- Range:- -3.4e38 to +3.4e38.

EX:- +3.2e-5, 4.1e8, -0.2e+3.

#### RULES FOR CONSTRUCTING (VARIABLE NAMES)

- Combination of 1to8 Alphabets/digits or underscores. Some compilers allow variables names upto 40 characters but safer to stick at 8 characters.
- First character must be alphabet.
- No commas or blanks between.
- No special symbol other than underscore allowed.

EX:- si_int, m_hra, pop_e_89.


## 02. CONDITIONAL OPERATORS

### MULTIPLE INITIALISATIONS IN THE FOR LOOP
```( i = 1; j = 2; j <= 10; j++)```

### TERNARY OPERATORS
? and : are sometimes called ternary operators since they take three
arguments.
```
	expression 1 ? expression 2 : expression 3;
```
EX:-
```	int x,y;
	scanf("%d", &x);
	y = (x > 5 ? 3 : 4);
```
Equivantent to if:-
```	if( x > 5)
		y = 3;
	else
		y = 4;
```
____________________________________________
```
	char a;
	int y;
	scanf("%c", &a);
	y = (a >= 65 && a <= 90 ? 1 : 0);
```
____________________________________________


NOTES:- Not necessary, Conditional operators should be used only arithmetic statement.

EX:-
```	scanf("%d", &i);
	(i == 1 ? printf("Amit") : printf("All and sundry"));
```
_____________________________________________________________

```	char a = 'z';
	printf("%c", (a >= 'a' ? a : '!'));
```
=> Should be nested.

Ex:-
```	int big, a, b, c;
	big = (a > b ? ( a > c ? 3 : 4) : ( b > c ? 6 : 8));
```
## 03. BREAK AND CONTINUIUE STATEMENTS

### THE BREAK STATEMENT
- Jump out of loop
- A break is usually associated with an if statement.

### THE CONTINUE STATEMENT
- Control transfer to the begining of the loop.
- A continue is usually associated with an if statement.

### Example 01
```
#include<stdio.h>

main()
{
      int i,j;
      
      for(i = 1;i <= 2; i++)
      {
            for(j = 1;j <= 2; j++)
            {
                  if(i == j)
                       break;
                  printf("\n %d %d \n", i, j);
            }
      }
      getchar();   
}
```
### Example 02
```
#include<stdio.h>

main()
{
      int i,j;
      
      for(i = 1;i <= 2; i++)
      {
            for(j = 1;j <= 2; j++)
            {
                  if(i == j)
                       continue;
                  printf("\n %d %d \n", i, j);
            }
      }
      getchar();   
}
```


## 04. DECISTIONS USING SWITCH

### SWITCH STATEMENT
```
	switch(integer expression)
	{
		case constant 1:
			do this;
			break;
		case constant 2:
			do this;
			break;
		case constant 3:
			do this;
			break;
		default:
			do this;
	}
```

### GOTO STATEMENT
	AVOID goto STATEMENT!

=> goto statement causes alot of compilations misunderstanding and
	using goto statement don't mean to a good programing.
=> you can logically does whatever you are doing by goto statement.

#### Example 01
```
#include<stdio.h>
#include<conio.h>

main()
{
      int goals;
      
      printf("Enter the number of goals scored against India: ");
      scanf("%d", &goals);
      
      if(goals <=5)
               goto sos;
               
      else
      {
          printf("About time soccer players learnt C\n");
          printf("and said goodbye! adieu! to soccer");
          //exit(); // terminates program execution
      }
      
      sos:
          printf("To err is human!");
          
      getch();
}
```
#### Add & Square
```
#include<stdio.h>

main()
{
      int n;
      int i=1;
      int sqr;
      int sum=0;
      
      printf("Enter the Number");
      scanf("%d", &n);
      
      while(i<=n)
      {
           sqr = i*i;
           printf("%d",n);
           if(i != n)
           {
                printf("+");
           }
           sum = sqr+sum;
           i++;
      }
      printf("=%d", sum);
}
```

#### Stack Example
```
#include<stdio.h>

int loc = -1;
int array[20];
int TRUE = 1;
int FALSE = 0;

int isEmpty(void)
{
    if(loc == -1)
    {
           return TRUE;
    }
    return FALSE;
}

int isFull(void)
{
    if(loc == 20)
    {
           return TRUE;
    }
    return FALSE;
}

int pop()
{
    if(!isEmpty())
    {
           int a = array[loc];
           loc--;
           return a;
    }
    printf("Stack is empty");
    return-1;
}

void push(int a)
{
     if(!isFull())
     {
            loc++;
            array[loc] = a;
            return;
     }
     printf("Stack is Full");
}

main()
{
    int a = pop();
    if(a != -1)
    {
         printf("%d",a);
    }
    push(50);
    push(150);
    push(200);
    pop();
    pop();
    a=pop();
    if(a != -1)
    {
         printf("%d",a);
    }
    getch();
}
```

### Example Area of Circle
```
#include <stdio.h>

//Area of Circle
main()
{     
      double pi = 3.1415926536;
      int radius;
      double area;
      
      printf("Enter the radius of circle: ");
      scanf("%d", radius);
      
      /* The area of a circle is PI times the radius squared */
      area = pi * radius * radius;
      printf("The area of the circle would be %f\n", area);
                
      fflush(stdin); // use for visual after press enter n don't close window whenever programs completely run
      getchar(); // stop the screen to display
}
```

#### Example Scanf
```
// scanf functions

#include <stdio.h>

main()
{
      int x;
      double y;
      char string[100];     
      
      // string input
      
      printf("Enter one word: ");
      scanf("%s", string); //note there is no & before string
      printf("The word you entered was >>%s<<\n");
      
      printf("Enter many words: ");
      fflush(stdin); // flush anything to the keyboard
      scanf("%[^\n]", string); // read up to a newline (multiple words)
      printf("The text you entered was >>%s<<\n");
      
      // integer input
      
      printf("Please enter a number: ");
      scanf("%d", &x);
      printf("The number you entered was %d\n", x);
      
      // character input
      
      printf("Please enter a single character: ");
      fflush(stdin);
      scanf("%c", &string[0]);
      printf("The character that you entered was '%c'\n", string[0]);
      
      printf("Please enter 4 characters: ");
      fflush(stdin);
      scanf("%4c", &string[0]);
      printf("The character you entered were >>>%c%c%c%c<<<\n", string[0], string[1], string[2], string[3]);
      
            
      fflush(stdin);
      getchar();
}
```

### Example printf
```
// printf functions

#include <stdio.h>

main()
{
      int x = 415;
      double y = 3.14159;
      int len = 7;
      char string[30];     
      
      strcpy(string, "Hello"); // string is the only variable not initialised
      
      // string formatting options
      
      printf("123456789012345678901234567890\n");
      printf("%s<<<<\n", string);
      printf("%10s<<<<\n", string);
      printf("%-10s<<<<\n", string);
      printf("%.3s<<<<\n", string);
      printf("%.*s<<<<\n", len, string);
      printf("\n");
      
      // integer formatting options
      
      printf("123456789012345678901234567890\n");
      printf("%d<<<<<\n", x);
      printf("%10d<<<<<\n", x);
      printf("%010d<<<<<\n", x);
      printf("%*d<<<<<\n", len, x);            
      printf("%-10d<<<<<\n", x);
      printf("%.1d<<<<<\n", x);
      printf("\n");
      
      // character formatting options
      
      printf("123456789012345678901234567890\n");
      printf("%c<<<<<\n", string[0]);
      printf("%10c<<<<<\n", string[0]);
      printf("\n");
      
      // floating-point formatting options
      
      printf("123456789012345678901234567890\n");
      printf("%f<<<<<\n", y);
      printf("%10f<<<<<\n", y);
      printf("%10.3f<<<<<\n", y);
      printf("%10.8f<<<<<\n", y);
      printf("\n");
      
      // other features
      
      printf("123456789012345678901234567890\n");
      printf("%%\n");
            
      fflush(stdin);
      getchar();
}
```

#### Example Celsius to Fahrenheit
```
// temperature

#include <stdio.h>

main()
{
      int celsius;
      double fahr;
      
      // First, get the Celsius value from the keyboard
      
      printf("Please enter a temperature in degrees Celsius: ");
      scanf("%d", &celsius);
      
      // Perform the conversion F = 32 + C * 9/5;
      
      fahr = 32 + (double)celsius * 9 / 5;
      
      // Output the result
      
      printf("%d degrees Celsius = %.2f degrees Fahrenheit\n", celsius, fahr);
      
      fflush(stdin);
      getchar();
}
```

#### Example Match String
```
#include<stdio.h>

main()
{
      char string1[50];
      char string2[50];
      int i,j;
      int boolean = 0;
      
      printf("Please enter the first line: ");
      scanf("%[^\n]", string1);
      fflush(stdin);
      printf("Please enter the second line: ");
      scanf("%[^\n]", string2);
      
      //printf("%s<<<<>>>>%s", string1, string2);
      
      for(i=0; string1[i] != '\0'; i++){}
      
      for(j=0; string2[j] != '\0'; j++){}
      
      if(i == j)
      {
           i=0;
           while(string1[i] != '\0')
           {
                if(string1[i] == string2[i])
                {
                      if(i == '\0'){
                           printf("Both strings >>%s<< and >>%s<< are matched\n", string1, string2);        
                      }
                }
           i++;
           }
      }
      else
      {
          printf("Both strings >>%s<< and >>%s<< are not matched\n", string1, string2);
      }
     
      fflush(stdin);
      getchar();
}
```


