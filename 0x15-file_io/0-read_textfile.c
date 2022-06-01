#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf = malloc(sizeof(char *) * letters + 1);
	int result, w_Rite;

	fd = open(filename, O_CREAT | O_RDONLY, 00400);
	if (fd == -1 || filename == NULL)
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

	w_Rite = write(fd, buf, letters);
	if (w_Rite == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}	
}
