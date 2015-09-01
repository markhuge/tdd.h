#include <stdio.h>
#include <stdbool.h>

#define COLOR_FAIL      "\x1b[31m"
#define COLOR_SUCCESS   "\x1b[32m"
#define COLOR_RESET     "\x1b[0m"

int test (char *label, bool assertion) {
  if (assertion) {
    printf(COLOR_SUCCESS "PASS: %s\n", label);
    return 0;
  }
  else {
    printf(COLOR_FAIL "FAIL: %s\n", label);
    return 1;
  }
}
