# Chapter 3
## Section 3.1 

scanf and printf support formatted reading and writing.  The printf function is designed to display the contents of a string, format strinig, with values possibly inserted at specific points in the string.  printf must be supplied with the format string, followed by any values that are to be inserted into the string during printing. <br />

```C
printf(string, expression1, expression2, ...);
```

The values displayed can be constants, variables, or expressions.  There is no limit to the number of values that can be printed by a single cal off printf.  The format string may contain both ordinary characters and conversion specifications.  A conversion specification is a placeholder representing a value to be filled in during printing.  Conversion specifications begin with the % character.  The information that follows the % character specifies how the value is converted from binary to characters. <br />

The minimum field width, m, specifies the minimum number of characters to print.  If the value to be printed requires fewer than m characters, the value is right justified within the field.  Putting a minus sign in front of m causes left justification.  The precision p depends on the conversion specifier X.  X indicates which conversion should be applied to the value before being printed. <br />

```C
// Conversion Specification form
printf("%m.pX", value);
```

Escape sequences enable strings to contain characters that would otherwise cause problems for the compiler, including control characters and charactes that whave a special meaning to the compiler. <br />

Name | Escape Sequence
--- | ---
Alert (bell) | \a
Backspace | \b
Form Feed | \f
New Line | \n
Carriage Return | \r
Horizontal Tab | \t
Vertical Tab | \v
Backslash | *\\
Question Mark | \*?
Single Quoted | \*'
Double Quote | \*"
**NOTE** | * Represents \


## Section 3.2

A scanf format string may contain both ordinary characters and conversion specifications.

```C
scanf("%d%d%f%f", &i, &j, &x, &y);
```

scanf will read the line, convert the characters into the numbers the characters represent, and assign the number values to i, j, x, and y, respectively.  When using scanf, the programmer must check that the number of conversion specifications matches the number of input variables and that each conversion is appropriate for the corresponding variable, the compiler is not required to check for a possible mismatch.

scanf behaves as a pattern-matching function that tries to match groups of input characters with conversion specifications.  When asked to read an integer, scanf searches for a digit, a plus sign, or a minus sign.  scanf then reads digits until it reaches a nondigit.  When asked to read a floating-point number, scanf searches for a plus or minus sign, a series of digits with an optional decimal point, and an exponent, consisting of e or E. When scanf encounters a character that can't be part of the current item, the character is left to be read again during the scanning of the next input item or during the next call of scanf.
