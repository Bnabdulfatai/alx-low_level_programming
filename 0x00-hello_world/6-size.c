#include <stdio.h>
/**
 * main - This is a program that print various computer types
 * Return: 0(if our return value is 0 our project is a sucess)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of char: %lu bytes\n", (unsigned long)sizeof(a));
printf("Size of int: %lu bytes\n", (unsigned long)sizeof(b));
printf("Size of long: %lu bytes\n", (unsigned long)sizeof(c));
printf("Size of long long: %lu bytes\n", (unsigned long)sizeof(d));
printf("Size of float: %lu bytes\n", (unsigned long)sizeof(f));
return (0);
}
