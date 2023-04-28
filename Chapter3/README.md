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
