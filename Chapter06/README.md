A loop is a statement whose job is to repeatedly execute the loop body.  In C, every loop has a controlling expression.  Each iteration of the loop, the controlling expression is evaluated.  The loop continues to iterate as long as the controlling expression returns true.
<br /><br />

## Section 6.1

The while statement has the form

```C
while(expression) /* Controlling Expression */
    statement     /* Loop Body */
```

The expression inside the parentheses is the controlling expression; the statement after the parentheses is the loop body.  The parentheses are mandatory.
<br /><br />

When a while statement is executed, the controlling expression is evaluated first.  If the value of the controlling expression is nonzero (true), the loop body isexecuted and the expression is tested again.  The process continues until the controlling expression has the value zero.

Use braces to create a compound statement as the loop body.
```C
while(expression){
  compound statement;
  compound statement;
  compoound statement;
}
```

A while statement won't terminate if the controlling expression always has a nonzero value.  This nonterminating loop is an infinite loop.

## Section 6.2

The do statement is related to the while statement.  The do statement has the form

```C
do statement
while(expression);
```

The body of a do statement must be one statement, or compound statement, and the controlling expression must be enclosed within parentheses.  When a do statement is executed, the loop body is executed first, then the controlling expression is evaluated.  If the value of the expression is nonzero, the loop body is executed, and the expression is evaluated once more.  Execution of the do statement terminates when the controlling expression has the value 0 after the loop body has been executed.


## Section 6.3

The for statement is ideal for loops that have a "counting" variable.  The for statement has the form

```C
for(expr1; expr2; expr3)
    statement
```

expr1 is an initialization step, and is performed once before the loop begins to execute.  expr2 controls loop termination.  expr3 is an operation to be performed at the end of each loop iteration.
<br /><br />

The for statement does not require all three expressions.  If the first expression is omitted, no itialization is performed before the loop is executed.  If the third expression is omitted, the loop body is responsible for ensuring the value of the second expression becomes false.  When the first and third expressions are both omitted, the resulting loop behaves as the while loop behaves.  If the second expression is omitted, the expression defaults to true and the for loop becomes an infinite loop.
<br /><br />

Use a comma expression as the first or third expression in the for statement to accomplish two, or more, initialization expressions or a for statement that increments several variables.  A comma expression is evaluated in two steps: First, expr1 is evaluated and discarded.  Second, expr2 is is evaluated with the value of expr2 becoming the value of the entire expression.
