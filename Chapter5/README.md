# Chapter 5
## Section 5.1

C's if statement tests the value of an expression for "true" or "false."  In C, a comparison yields an integer: either 0 (false) or 1 (true).

|Symbol | Meaning |
|--- | --- |
| < | less than |
| > | greater than |
| <= | less than or equal to |
| >= | greater than or equal to |

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
&#124;&#124;  | logical or

The logical operators treat any nonzero operand as a true value and any zero operand as a false value.
+ !expression returns the value 1 if expression has the value 0.
+ expression1 && expression2 returns the value 1 if the values of expression1 and expression2 are both nonzero.
+ expression1 || expression2 returns the value 1 if either expression1 or expression2 or both expression1 and expression2 has a nonzero value.

## Section 5.2

The if statement allows a program to choose between two alternatives by testing the value of an expression.
```C
if(expression)
    statement;
```

The parentheses around the expression are mandatory.  The parentheses are part of the if statement, not part of the expression.  When an if statement is executed, the espression in the parentheses is evaluated.  If the value of the expression is nonzero, which C interprets as true, the statement after the parentheses is executed.<br />

When an if statement controls two or more statements, a compound statement is formed.
``C
if(expression){
  statement1;
  statement2;
  statement3;
  }
```
Putting braces around a group a statements forces the compiler to treat the group as a single statement. <br /> <br />

An if statement may have an else statement.
```C
if(expression)
  statement1;
else
  statement2;
```

The statement that follows the word else is executed if the expression in parentheses returns 0 (false).  Both statements end with a semicolon.  There are no restrictions on the kind of statements that appear inside an if statement.  When if statements are nested, C follows the rule that an else clause belongs to the nearest if statement that hasn't been paired with an else.  Thus, adding braces to statements ensures the compiler operates instructions in an explicit order.

```C
if(condition){
    if(condition)
        statement;
}
else
    statement;
```
![ifElse](https://github.com/radixon/C_Exploration/assets/59415488/def13397-94cd-41f3-a23c-dd142ee35e11)

<br /><br />


The conditional operator consists of two symbols (? and :)
```C
expression1 ? expression2 : expression3
```
The condition expression should be read "if expression1 then expression2 else expression3."
![conditionalExpression](https://github.com/radixon/C_Exploration/assets/59415488/711e863f-0851-4dd0-89a1-b2377a408b83)


## Section 5.3

As an alternative to the cascaded if statement, C provides the switch statement.  A switch tatement is often faster than if statements, especially when there are several cases.

```C
switch(expression){
    case constant-expression : statements
    ...
    case constant-expression : statements
    default : statements
}
```

Duplicate case labels aren't allowed.  The order of the cases does not matter.  Only one constant expression may foolow the word case; however, sever case labels may preced the same group of statements.  There is not a way to write a case label that specifies a range of values.  A default case is not required.
