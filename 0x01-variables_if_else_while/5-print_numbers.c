#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - print if the number is postive, zero, or negative
 * Description: using the main function
 * this program prints "prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
char x = '0';

while (x <= '9')
{

putchar(x);
x++;

}
putchar('\n');
return (0);
}

