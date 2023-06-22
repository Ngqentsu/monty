#include "monty.h"

/**
 * is_integer - checks if a string is an integer
 * @str: string to check
 * Return: 1 if string is an integer, 0 otherwise
 */
int is_integer(const char *str)
{
if (str == NULL || *str == '\0')
return (0);

if (*str == '-' || *str == '+')
str++;

while (*str != '\0')
{
if (*str < '0' || *str > '9')
return (0);
str++;
}

return (1);
}
