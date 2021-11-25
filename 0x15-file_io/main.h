#ifndef _MAIN_H_
#define _MAIN_H_
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define BUFSIZE 1204

ssize_t read_textfile(const char *filename, size_t letters);

#endif /*_MAIN_H_*/
