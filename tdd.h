#include <stdio.h>
#include <stdbool.h>

int tests_run = 0;
#define COLOR_FAIL      "\x1b[31m"
#define COLOR_SUCCESS   "\x1b[32m"
#define COLOR_RESET     "\x1b[0m"

#define PASS(label) fprintf(stdout, "%s " COLOR_SUCCESS "PASS: %s" COLOR_RESET "\n", __TIME__, label);
#define FAIL(label) fprintf(stderr,"%s " COLOR_FAIL "FAIL: %s %s() on line %d" COLOR_RESET "\n", __TIME__, label,__func__,__LINE__);

#define expect(label, test) do { if (!(test)) { FAIL(label); } else { PASS(label); }} while (0)
#define test(test) do { int exit_code=test(); tests_run++; if (exit_code) return exit_code; } while (0)

