#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
  unsigned int i;
  char* p;
  char* delim = "'";
  for (i = 1; i < argc; i++) {
    if (i > 1) putchar(' ');
    p = argv[i];

    printf("%s", delim);
    while(*p != '\0') {
      if (p[0] == '\'') {
        printf("%s\\'%s", delim, delim);
        p++;
        continue;
      }
      if (p[0] == '\\') putchar('\\');
      putchar((p++)[0]);
    }
    printf("%s", delim);
  }
  putchar('\n');
  return 0;
}
