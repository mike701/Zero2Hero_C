#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

void print_the_flag() {
  int fd = open("/tmp/flag", O_RDONLY, 00400);
  char buff = {0};
  if(fd == -1){
    perror("open");
    return -1;
  }

  if(read(fd, &buff) < 0){
    perror("read");
    close(fd);
    return -1;
  }

  printf("%s", buff);
  return 0;

}