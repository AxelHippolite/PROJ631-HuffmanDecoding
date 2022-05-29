#include "displayer.h"

void displayAlphabet(int nb_letters, struct node **nodes){
    printf("\n--> Alphabet Created :\nSize : %d\nOCC | FREQ\n", nb_letters);
    for(int i = 0; i < nb_letters; i++){
        printf(" %c  |  %d\n", nodes[i]->label, nodes[i]->freq);
    }
}

void displayBits(char *bits){
    printf("\n--> Binary to Decode : %s\n", bits);
}

void displayFooter(float rate, float avg){
    printf("\n¤ Compression Rate : %.2f%%", rate);
    printf("\n¤ AVG Bits per Occurences : %.2f", avg);
    printf("\n\n¤ The Result of the Decompression is available in the 'results' folder.\n");
}