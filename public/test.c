#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
int main ()
{
    char *text = "kaneki.txt";


    int fd = open(text,  O_RDWR);
    // printf("%d\n", fd);
    // int fd1 = open("kaneki1.txt",  O_RDWR);
    // int fd1 = open("kaneki1.txt",  O_RDWR);
    // int fd1 = open("kaneki1.txt",  O_RDWR);
    // printf("%d\n", fd1);
    int pt = '4';
    int pt1 = '8';
    // char *p = malloc(6);
    // int byteWrite = read(fd, p, 6);
    write(fd,  &pt, 1);
    write(fd,  &pt1, 1);

    // printf("byteWrite: %d",  byteWrite);

// ssize_t result = write(18, "lk", 2);
//     if (result == -1) {
//         perror("write error");
//     }
//     write(10, "lk", 2);

}