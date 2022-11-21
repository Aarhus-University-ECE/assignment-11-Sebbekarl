#include "sum.h"

#include <stdio.h>
#include <assert.h>

/* Sum integers 1 to n */
int sum(int n)
{
  /* pre-condition */
  assert(n >= 1);
  /* post-condition */
  if (n > 1)
    return n + sum(n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail(int n, int total)
{
  /* pre-condition */
  assert(n >= 1);

  if (n == 1)
  {
    return total + 1;
  }
  return sumtail(n - 1, total + n);
}

/* Sum integers 1 to n */
int sumwhile(int n)
{
  /* pre-condition */
  assert(n >= 1);

  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum += i;
  }
  return sum;
}
