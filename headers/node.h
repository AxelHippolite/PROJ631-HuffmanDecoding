#ifndef NODE_DOT_H
#define NODE_DOT_H
#include<stdio.h>
#include<stdlib.h>

struct node{
   int freq;
   char label;
   struct node *left_child;
   struct node *right_child;
};

struct node *createNode(int freq, char label, struct node *left_child, struct node *right_child);
int isLeaf(struct node *node);

#endif