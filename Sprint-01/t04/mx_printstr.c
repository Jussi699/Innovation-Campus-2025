#include <unistd.h>
#include "mx_strlen.c"
#include <stdio.h>


int mx_strlen(const char *s);

void mx_printstr(const char *s){
  int length = mx_strlen(s);
  if(s[length - 1] == '\n'){
    length--; //Removing sybol '\n' from the length calculation
  }
  write(1, s, mx_strlen(s));
  const char *length_msg = "Length of the string:";
  write(1, length_msg, mx_strlen(length_msg));
  char len_str[10];
  int len = snprintf(len_str, 10, "%d\n", length);
  write(1, len_str, len);
}












