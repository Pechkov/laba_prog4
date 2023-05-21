/*/-----------------------------/*/
/*---->     Variant: 16     <----*/
/*/-----------------------------/*/

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "header.h"
#include "strings.h"

int main() {
  char *result = (char *)malloc(MAX_STRING);
  char test1[] = "/cygdrive/c/Windows/system32+home/Andrey";
  char test2[] =
      "/cygdrive/c/"
      "Windowssystem32323232323243432532555523432423423675894985849845398453984"
      "538534984538745387453783457843743746376643746387453874538745387453874537"
      "843867438678437684376854675467945876958476854698579689879458679845769845"
      "76984576945769845769845769854769875965679567594678458645";
  char test3[] = "/cygdr:ive/c/Windows/system32";

  printf("----1-TEST----\n");
  if (check(test1, result, '+')) {
    output(result);
  }
  printf("----2-TEST----\n");
  if (check(test2, result, '+')) {
    output(result);
  }
  printf("----3-TEST----\n");
  if (check(test3, result, '+')) {
    output(result);
  }
  printf("---END-TEST----\n");

  char delim;
  char *in = input(&delim);
  if (check(in, result, delim)) {
    output(result);
    return 0;
  }
  char *out = process(in, delim);
  output(out);
  

  free(result);
  free(out);
  free(in);
  return 0;
}
