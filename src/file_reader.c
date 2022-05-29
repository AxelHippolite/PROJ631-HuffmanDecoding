#include "file_reader.h"

int getLen(FILE *ptr){
    return fgetc(ptr) - '0';
}

int getSize(FILE *ptr){
    fseek(ptr, 0, SEEK_END);
    int len = ftell(ptr);
    fseek(ptr, 0, SEEK_SET);
    return len;
}

int occCalculator(FILE *ptr, int nb_letters, char *occ, int *freq){
    char line[4];
    int len_text = 0;
    if(fgetc(ptr) != EOF){
        for(int i = 0; i < nb_letters; i++){
            for(int j = 0; j < 4; j++){
                line[j] = fgetc(ptr);
            }
            occ[i] = line[0];
            freq[i] = line[2] - '0';
            len_text += freq[i];
        }
    }
    return len_text;
}

char *getBits(FILE *bin, int len){
    char *buffer = malloc(len);
    char *bits = malloc(len * 8 * sizeof(char));
    fread(buffer, len, 1, bin);
    for(int j = 0; j < len; j++){
        int i = CHAR_BIT;
        while(i--) {
            bits[j * CHAR_BIT + CHAR_BIT - i - 1] = '0' + ((buffer[j] >> i) & 1);
        }
    }
    free(buffer);
    return bits;
}