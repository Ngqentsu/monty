#include "monty.h"

/**
 * get_line - Reads a line from a file stream
 * @lineptr: Pointer to the buffer storing the line
 * @n: Pointer to the size of the buffer
 * @stream: File stream to read from
 * Return: Number of characters read, or -1 on failure
 */
ssize_t get_line(char **lineptr, size_t *n, FILE *stream)
{
ssize_t rd;

if (lineptr == NULL || n == NULL || stream == NULL)
return (-1);

rd = get_line(lineptr, n, stream);

if (rd == -1)
{
free(*lineptr);
*lineptr = NULL;
*n = 0;
}
return (rd);
}
