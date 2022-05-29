#include "file_reader.h"

int getLen(FILE *ptr){
    return fgetc(ptr) - '0';
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