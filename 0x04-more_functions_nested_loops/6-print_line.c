

#include "main.h"

2

​

3

/**

4

 * print_line - prints a line

5

 * @n: variable

6

 *

7

 * Return: 0

8

 */

9

​

10

void print_line(int n)

11

{

12

        int a = 0;

13

​

14

        while (a < n && n > 0)

15

        {

16

                _putchar('_');

17

                a++;

18

        }

19

        _putchar('\n');

20

}

21

