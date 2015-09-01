#include <stdio.h>
#include <stdbool.h>

int asserts_total, test_total = 0, test_pass = 0, test_fail = 0;
#define COLOR_FAIL      "\x1b[31m"
#define COLOR_SUCCESS   "\x1b[32m"
#define COLOR_RESET     "\x1b[0m"

#define PASS(label) fprintf(stdout, "%s " COLOR_SUCCESS "PASS: %s" COLOR_RESET "\n", __TIME__, label); test_pass++;
#define FAIL(label) fprintf(stderr,"%s " COLOR_FAIL "FAIL: %s %s() on line %d" COLOR_RESET "\n", __TIME__, label,__func__,__LINE__); test_fail++;

#define expect(label, test) do { asserts_total++; if (!(test)) { FAIL(label); } else { PASS(label); }} while (0)
#define test(test) do { int exit_code=test(); test_total++; if (exit_code) return exit_code; } while (0)

void test_summary() {
  printf("\nRan %d tests (%d assertions):\n" COLOR_SUCCESS "PASSED: %d " COLOR_FAIL "FAILED: %d " COLOR_RESET "\n", test_total, asserts_total, test_pass, test_fail);
}

