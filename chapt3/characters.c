#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/**
 * main -  a function to print the longest input line
 * @len: the current length of the line
 * @max: the maximum length seen so far
 *
