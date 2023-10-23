#include <stdio.h>

#define MAXLINE 100

int main(int argc, char const *argv[])
{
  double sum, atof(char []);
  char line[MAXLINE];
  int getline(char line[], int max);
  sum = 0;
  while(getline(line, MAXLINE) > 0)
    printf("\t%g\n", sum += atof(line));
  return 0;
}
