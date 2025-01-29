#include <unistd.h>

void mx_printchar(char a){
char *symbol = &a;
  write(1, symbol, 1);
}
