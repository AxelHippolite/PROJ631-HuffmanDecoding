#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    printf("##### Huffman Decompression #####\n");

    char ptr_path[50], bin_path[50], res_path[50];

    printf("\nPATH of TXT (MAX 50 CHAR) : "); scanf("%s", ptr_path);
    printf("PATH of BIN (MAX 50 CHAR) : "); scanf("%s", bin_path);
    printf("PATH of RESULTS (MAX 50 CHAR) : "); scanf("%s", res_path);

    FILE *ptr = fopen(ptr_path, "r");
    FILE *bin = fopen(bin_path, "rb");
    FILE *res = fopen(res_path, "w");

    return 0;
}