# Chapter 4
## Section 4.1
![upc](https://user-images.githubusercontent.com/59415488/235332737-7f625ffc-a9a1-4fda-800d-75477f35bb29.png)

The arithmetic operators perform addition, subtraction, multiplication, and division.  The additive and multiplicative operators are binary, as these operators require two operands.  The unary operators require one operand.  The modulo operator, %, is a multiplicative operator that allows integer operands only.  All other binary operators allow either integer or floating-point operands with mixing allowed.  When int and float operads are mixed, the result has type float. <br />

----
The C standard deliberatly leaves parts of the language unspecified, with the understanding that an "implementation" will fill in the details.  As a result, the behavior of the program may vary somewhat from one implementation to another.

The behavior described is Implementation-Defined Behavior 

----
<br />
C uses operator precedence rules to resolve the potential ambiguity of expressions with more than one operator.  The arithmetic operators have the following relative precedence:<br />
Highest: <t /> + - (unary) <br />
<t> * / %  <t/><br />
Lowest:  <t /> + - (binary) <br />

## Section 4.2

C's assignment operator, =, is used to store the value of a computed expression in a variable.  The effect of the simple assignment v = e is to evaluate the expression e and copy the value of e into v.  e can be a constant, a variable, or a more complicated expression as the following examples show:
```C
i = 5;
j = i;
k = i * j / 2.5;
```

In C, assignment is an operator.  Restated, the act of assignment produces a result.  The value of an assignment v = e is the value of v after the assignment.
```C
// The value of i = 72 after the following assignment
int i;
i = 72.99f;
```

The assignment operator, =, is right associative, so several assignments can be chained together.  In general, an assignment of the form v = e is allowed wherever a value of type v would be permitted.
```C
i = j = k = 0;
```

The assignment operator requires an lvalue as the operator's left operand.  An lvalue represents an object stored in computer memory, not a constant or the result of a computation.  Variables are the most common lvalue. <br /> <br />

The compound assignment operators are right associative.  In C, there are nine compound assignment operators: <br />
+ +=
+ -=
+ *=
+ /=
+ %=
+ ~=
+ &=
+ ^=
+ |=


