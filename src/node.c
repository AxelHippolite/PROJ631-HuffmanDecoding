#include "node.h"

struct node *createNode(int freq, char label, struct node *left_child, struct node *right_child){
    struct node *new_node = malloc(sizeof(struct node));
    new_node->freq = freq;
    new_node->label = label;
    new_node->left_child = left_child;
    new_node->right_child = right_child;
    return new_node;
}

int isLeaf(struct node *node){
    if(node->left_child == NULL && node->right_child == NULL) return 1;
    else return 0;
}