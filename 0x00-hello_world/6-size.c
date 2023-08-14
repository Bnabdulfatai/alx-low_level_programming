#include <stdio.h>
/**
 * main - A program that prints different computer types
 * return: 0(sucess)
 */
int main(void)
{
char c;
int i;
long l;
long long ll;
float f;
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of long: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of long long: %lu byte(s)\n", (unsigned long)sizeof(ll));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
