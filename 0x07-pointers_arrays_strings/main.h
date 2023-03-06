#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>

int _putchar(char c);
void *_memset(void *s, int c, size_t n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *haystack, char *needle);
void print_chessbopard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set-string(char **s, char *to);

#endif
