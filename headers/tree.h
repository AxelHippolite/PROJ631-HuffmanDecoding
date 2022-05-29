#ifndef TREE_DOT_H
#define TREE_DOT_H
#include<stdio.h>
#include<stdlib.h>
#include "node.h"
#include "sort.h"

struct node **createLeavesNodes(int nb_letters, int *freq, char *occ);
struct node *createTree(int nb_letters, struct node **nodes);

#endif