#include <stdio.h>;
#include <string.h>;

int main (int argc, char *argv[]) {
  char str[1024];
  int i;

  if (argc < 2) {
    return 1;
  }

  for (i = 1; i < argc; i++) {
    if (i == 1) {
      strcpy(str, argv[i]);
    } else {
      strcat(str, argv[i]);
    }
    if (i < argc-1) {
      strcat(str, " ");
    }
  }

  setuid(0);
  return system(str);
}

