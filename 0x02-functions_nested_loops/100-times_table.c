#include "main.h"
#include <stdio.h>
void print_times_table(int n)
{
if (n < 0 || n > 15)
return;
for (int i = 0; i <= n; i++)
{
for (int j = 0; j <= n; j++)
{
int res = i * j;
if (j == 0)
printf("%d", res);
else if (res < 10)
printf("   %d", res);
else if (res < 100)
printf("  %d", res);
else
printf(" %d", res);
}
printf("\n");
}
}
