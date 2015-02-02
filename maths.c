#include <stdio.h>


int main()
{
int a;
int b;
int c;

printf("Please input variable a & b\n");
scanf(" %i", &a);
scanf(" %i", &b);

printf("Addition\n");
c = a + b;
printf("\n%i + %i = %i\n", a, b, c);

printf("Multiplication\n");
c = a * b;
printf("\n%i * %i = %i\n", a, b , c);

printf("Division\n");
c = a / b;
printf("\n%i / %i = %i\n", a , b , c);
}
