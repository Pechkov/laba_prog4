#pragma once

#include <stdint.h>
#include <stdio.h>

size_t slen(const char *str);
int scmp(char *first, char *second);
int sncmp(char *first, char *second, size_t count);
char *scpy(char *toHere, char *fromHere);
size_t sspn(char *s, const char *accept);
int stok(char *s, const char symbol, char *output[]);
char *santok(char *result, const char symbol, char *input[], int count);
char *scat(char *dest, char *src);
size_t find(char *str, char *w);
int replace(char *str, char *old, char *new);
int replace_all(char *str, char *old, char *new);
char to_upper(char symbol);
