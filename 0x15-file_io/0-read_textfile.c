#include "main.h"
/**
  * read_textfile - reads a text file and prints it to posxi
  * @filename: name file
  * @letters: number characters
  * Return: 0
  **/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fl, tl, rd;
char BUF[BUFSIZE];
if (filename == NULL)
	return (0);
	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	tl = 0;
	rd = 1;
	while (letters > BUFSIZE && rd != 0)
	{
		rd = read(fl, BUF, BUFSIZE);
		write(STDOUT_FILENO, BUF, rd);
		tl += rd;
		letters -= BUFSIZE;
	}
	rd = read(fl, BUF, letters);
	write(STDOUT_FILENO, BUF, rd);
	tl += rd;
	close(fl);
	return (tl);
}
