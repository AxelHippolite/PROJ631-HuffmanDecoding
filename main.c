#include "file_reader.h"
#include "node.h"
#include "tree.h"
#include "displayer.h"

int main(int argc, char *argv[]){
    printf("##### Huffman Decompression #####\n");

    char ptr_path[50], bin_path[50], res_path[50];

    printf("\nPATH of TXT (MAX 50 CHAR) : "); scanf("%s", ptr_path);
    printf("PATH of BIN (MAX 50 CHAR) : "); scanf("%s", bin_path);
    printf("PATH of RESULTS (MAX 50 CHAR) : "); scanf("%s", res_path);

    FILE *ptr = fopen(ptr_path, "r");
    FILE *bin = fopen(bin_path, "rb");
    FILE *res = fopen(res_path, "w");

    int nb_letters = getLen(ptr);
    char *occ = malloc(nb_letters * sizeof(char));
    int *freq = malloc(nb_letters * sizeof(int));
    int len_text = occCalculator(ptr, nb_letters, occ, freq);

    fclose(ptr);

    struct node **nodes = createLeavesNodes(nb_letters, freq, occ);

    displayAlphabet(nb_letters, nodes);

    struct node *root = createTree(nb_letters, nodes);

    int len_bin = getSize(bin);
    char *bits = getBits(bin, len_bin);

    displayBits(bits);

    fclose(bin);

    printf("--> Result : ");
    decode(res, root, root, bits, len_text, 0);

    printf("\n\n--> Codes (no use) :\n");
    int code[50], index = 0; 
    int total_len = getCodes(root, code, index, 0);
    printf("ALL LEN : %d BITS.\n", total_len);

    return 0;
}