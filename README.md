# tdd.h

> A hamfisted attempt to make TDD easier in C

## Abstract

TDD wasn't a thing I was aware of when I used to write C. Years after I'd drunk the TDD Kool-aid, I'm doing projects in C again. 

I working on this publicly so people who are way better at C than I, can tell me how I'm doing this a stupid way and what I can do to make this more useful.

**Why not CUnit/CUT/etc?**

I didn't want to adopt a whole test framework, I just wanted more useful and expressive assertions than those provided by `<assert.h>`.

## Usage
```c
#include "tdd.h"
int foo=0, bar=5;

int main () {
  test("Foo should equal 0",     foo == 0);
  test("Bar should equal 5",     bar == 5);
  test("This will totally fail", 1 == 0);
  return 0;
}
```

**Output**:

![](docs/ss.png)


