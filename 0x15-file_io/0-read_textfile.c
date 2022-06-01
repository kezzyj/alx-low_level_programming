#include "main.h"
/**
 * read_textfile- function to read bytes of data
 * @filename: name of file 
 * @letters: number of bytes to be read
 * Return: the written bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = malloc(sizeof(char *) * letters + 1);
	int result, w_Rite, fd;

	if (buf == NULL)
		return (0);
	if (filename == NULL || letters == 0)
	{
		free(buf);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	result = read(fd, buf, letters);
	if (result == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	buf[letters] = '\0';
	w_Rite = write(fd, buf, result);
	if (w_Rite == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}	
	close(fd);
	free(buf);
	return (w_Rite);
}
