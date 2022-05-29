#ifndef FILE_READER_DOT_H
#define FILE_READER_DOT_H
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int getLen(FILE *ptr);
int getSize(FILE *ptr);
int occCalculator(FILE *ptr, int nb_letters, char *occ, int *freq);
char *getBits(FILE *bin, int len);

#endif