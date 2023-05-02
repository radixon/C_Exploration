# Chapter 5
## Section 5.1

C's if statement tests the value of an expression for "true" or "false."  In C, a comparison yields an integer: either 0 (false) or 1 (true).

|Symbol | Meaning
|--- | ---
| < | less than
| > | greater than
| <= | less than or equal to
| >= | greater than or equal to

The relational operators can be used to compare integers and floating-point numbers, with operands of mixed types allowed.  The precedence of the relational operators is lower than that of the arithmetic operators.  The relational operators are left associative. <br />

The equality operators have a unique appearance

Symbol | Meaning
--- | ---
== | equal to
!= | not equal to

The equality operators are left associative and produce either 0 (false) or 1 (true).  The equality operators have lower precedence than the relational operators. <br />

The logical operators produce either 0 (false) or 1 (true).

Symbol | Meaning
--- | ---
! | logical negation
&& | logical and
(U+23D0) (U+23D0)  | logical or

The logical operators treat any nonzero operand as a true value and any zero operand as a false value.
+ !expression returns the value 1 if expression has the value 0.
+ expression1 && expression2 returns the value 1 if the values of expression1 and expression2 are both nonzero.
+ expression1 || expression2 returns the value 1 if either expression1 or expression2 or both expression1 and expression2 has a nonzero value.
