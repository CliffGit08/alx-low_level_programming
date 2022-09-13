#include "main.h"

/**
* main - prints _putchar, followed by a new linees
* Return: Always 0 (Success)
*/

int main(void)
{
char putf[] = "_putchar";
int c;
for (c = 0; c < 8; c++)
{
_putchar(putf[c]);
}
_putchar('\n');
return (0);
}
