#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

// Main pour GNL classique
/*
int main(int ac, char *av[])
{
    int fd = 0;
    //int i = 1;
	char *line;
	if (ac == 2)
		fd = open(av[1], O_RDONLY);
	line = get_next_line(fd);
    while (line)
    {
		//printf("%d appel - retour :\n%s----------\n", i++, line);
        printf("%s", line);
        free(line);
        line = get_next_line(fd);
	}
    if (fd != 0)
        close(fd);
    return (0);
}
*/

// Main pour GNL Bonus


int main(void)
{
    int f1;
	int f2;
	int	f3;
	int f4;
	int f5;
	int f6;
	int f7;
	char *line;
	int end;
	end = 0;
	f1 = open("ztest/big_line_no_nl", O_RDONLY);
	f2 = open("ztest/longline.txt", O_RDONLY);
	f3 = open("ztest/longlinewithn.txt", O_RDONLY);
	f4 = open("ztest/Rois-Chapitre1.txt", O_RDONLY);
	f5 = open("ztest/test.txt", O_RDONLY);
	f6 = open("ztest/exactl.txt", O_RDONLY);
	f7 = open("ztest/long2k.txt", O_RDONLY);
    while (end < 7)
    {
		end = 0;
		line = get_next_line(f1);
        printf("F1 : %s----\n", line);
		if (!line)
			end++;
		if (line)
        	free(line);
        line = get_next_line(f2);
		printf("F2 : %s----\n", line);
		if (!line)
			end++;
		if (line)
        	free(line);
		line = get_next_line(f3);
		printf("F3 : %s----\n", line);
		if (!line)
			end++;
		if (line)
        	free(line);
		line = get_next_line(f4);
		printf("F4 : %s----\n", line);
		if (!line)
			end++;
		if (line)
        	free(line);
		line = get_next_line(f5);
		printf("F5 : %s----\n", line);
		if (!line)
			end++;
		if (line)
        	free(line);
		line = get_next_line(f6);
		printf("F6 : %s----\n", line);
		if (!line)
			end++;
		if (line)
        	free(line);
		line = get_next_line(f7);
		printf("F7 : %s----\n", line);
		if (!line)
			end++;
		if (line)
        	free(line);
	}
	if (line)
		free(line);
    close(f1);
	close(f2);
	close(f3);
	close(f4);
	close(f5);
	close(f6);
	close(f7);
    return (0);
}