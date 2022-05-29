#include "sort.h"

void swap(struct node *x, struct node *y){
    struct node temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(struct node **nodes, int len){
    for(int i = 0; i < len - 1; i++){
        for(int j = 0; j < len - i - 1; j++){
            if(nodes[j]->freq > nodes[j+1]->freq){
                swap(nodes[j], nodes[j+1]);
            }
        }
    }
}