#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
void *malloc(size_t size);
void free(void *ptr);
void exit(int status);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _isNum(char *num);
char *_memset(char *s, char b, unsigned int n);
int _strlen(char *s);
int main(int argc, char *argv[]);
void errors(void);
int is_digit(char );
int num1[2000], num2[2000],mul[4000]= {0};
int l1, l2, i, j, tmp,chkk;
int check_error(char **argv, int argc);

#endif /* MAIN_H */
