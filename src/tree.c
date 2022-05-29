#include "tree.h"

struct node **createLeavesNodes(int nb_letters, int *freq, char *occ){
    struct node **nodes = malloc(nb_letters * sizeof(struct node));
    for(int i = 0; i < nb_letters; i++){
        nodes[i] = createNode(freq[i], occ[i], NULL, NULL);
    }
    return nodes;
}

struct node *createTree(int nb_letters, struct node **nodes){
    while(nb_letters != 1){
        struct node *l_node = nodes[0];
        struct node *r_node = nodes[1];
        struct node *new_node = createNode(l_node->freq + r_node->freq, nb_letters + '0', l_node, r_node);
        remove_elt(nodes, 0, nb_letters);
        nodes[0] = new_node;
        nb_letters--;
        bubbleSort(nodes, nb_letters);
    }
    return nodes[0];
}