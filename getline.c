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
size_t bufsize = *n;
int c;
char *line = *lineptr, *new_line, *resized_line;

if (line == NULL || bufsize == 0)
{
bufsize = 1024;
line = malloc(bufsize);
if (line == NULL)
return (-1);
}
rd = 0;
while ((c = fgetc(stream)) != EOF)
{
if ((size_t)rd >= bufsize - 1)
{
bufsize *= 2;
new_line = realloc(line, bufsize);
if (new_line == NULL)
{
free(line);
return (-1);
}
line = new_line;
}
line[rd++] = c;
if (c == '\n')
break;
}
if (rd == 0)
{
free(line);
line = NULL;
}
else
{
line[rd] = '\0';
resized_line = realloc(line, rd + 1);
if (resized_line != NULL)
line = resized_line;
}
*lineptr = line;
*n = bufsize;
return (rd);
}
