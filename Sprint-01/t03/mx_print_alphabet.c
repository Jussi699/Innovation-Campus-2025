#include "mx_printchar.c"

void mx_printchar(char a);

void mx_print_alphabet(void){
  for(char a = 'A'; a <= 'Z'; a++){
      mx_printchar(a);
      mx_printchar(a + 32);
    }
  mx_printchar('\n');
}

