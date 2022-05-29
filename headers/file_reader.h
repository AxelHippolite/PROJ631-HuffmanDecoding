#ifndef FILE_READER_DOT_H
#define FILE_READER_DOT_H
#include<stdio.h>
#include<stdlib.h>

int getLen(FILE *ptr);
int occCalculator(FILE *ptr, int nb_letters, char *occ, int *freq);

#endif