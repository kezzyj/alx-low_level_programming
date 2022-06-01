#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf = malloc(sizeof(char *) * letters + 1);
	int result, w_Rite;

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
	if(result == -1)
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
