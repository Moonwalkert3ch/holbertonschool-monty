#include "monty.h"

/**
 * check_num - checks if int is an integer
 * @str: srtring to be checked
 * Return: 1 if success, 0 unsuccessful
*/

int check_num(char *str)
{
int i = 0;

while (str[i])
{
if (i == 0 && str[i] == '-' && str[i + 1])
{
i++;
continue;
}
if (str[i] < '0' || str[i] > '9')
return (0);
i++;
}
return (1);
}
