# Chapter 4
## Section 4.1

The arithmetic operators perform addition, subtraction, multiplication, and division.  The additive and multiplicative operators are binary, as these operators require two operands.  The unary operators require one operand.  The modulo operator, %, is a multiplicative operator that allows integer operands only.  All other binary operators allow either integer or floating-point operands with mixing allowed.  When int and float operads are mixed, the result has type float.

----
The C standard deliberatly leaves parts of the language unspecified, with the understanding that an "implementation" will fill in the details.  As a result, the behavior of the program may vary somewhat from one implementation to another.

The behavior described is Implementation-Defined Behavior
----

C uses operator precedence rules to resolve the potential ambiguity of expressions with more than one operator.  The arithmetic operators have the following relative precedence:
Highest: /t + - (unary)
            * / %
Lowest:  \t    + - (binary)
