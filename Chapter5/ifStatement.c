/*******************************************************************
 * Files:  ifStatement.c
 * Author: Rozell Dixon
 * Date:   June 2023
 * 
 * Problem Description:   Given the roots of two binary trees p
 *                        and q, write a function to check if p
 *                        and q are the same.
 * 
 *                        Two binary trees are considered the same
 *                        if the trees are structurally identical,
 *                        and the nodes have the same value.
 * 
 * Purpose: Demonstrate the use of an if statement.
 *          if(condition) statement;
 * 
 *          Demonstrate the use of an if/else statement.
 *          if(condition)
 *              statement;
 *          else
 *              statement;
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct TreeNode{
    /* Create TreeNode */
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode *create(int value){
    /* Create a new TreeNode */
    struct TreeNode* newNode = malloc(sizeof(struct TreeNode));
    newNode->val = value;
    newNode->left = NULL;
    newNode->right =NULL;
};

struct TreeNode *insertLeft(struct TreeNode *root, int value){
    /* Insert on the left */
    root->left = create(value);
    return root->left;
};

struct TreeNode *insertRight(struct TreeNode *root, int value){
    /* Insert on the right */
    root->right = create(value);
    return root->right;
};

bool isSameTree(struct TreeNode *p, struct TreeNode *q){
    /***************************************************
     *  Demonstrate the use of an if statement
     **************************************************/
    if(!p) return !q;
    if(!q) return !p;
    if(p->val != q->val) return false;
    return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
}

int main(void){
    struct TreeNode *p = create(1);
    insertLeft(p,2);
    insertRight(p,3);

    struct TreeNode *q = create(1);
    insertLeft(q,2);
    insertRight(q,3);
    /***************************************************
     *  Demonstrate the use of an if/else statement
     **************************************************/
    if(isSameTree(p,q))
        printf("Example 1 returns True\n");
    else
        printf("Example 1 returns False\n");
    
    struct TreeNode *r = create(1);
    insertLeft(p,2);

    struct TreeNode *s = create(1);
    insertRight(s,2);
    /***************************************************
     *  Demonstrate the use of an if/else statement
     **************************************************/
    if(isSameTree(r,s))
        printf("Example 2 returns True\n");
    else
        printf("Example 2 returns False\n");
    
    struct TreeNode *t = create(1);
    insertLeft(p,2);
    insertRight(p,1);

    struct TreeNode *u = create(1);
    insertLeft(u,1);
    insertRight(u,2);
    /***************************************************
     *  Demonstrate the use of an if/else statement
     **************************************************/
    if(isSameTree(t,u))
        printf("Example 3 returns True\n");
    else
        printf("Example 3 returns False\n");

    return 0;
}