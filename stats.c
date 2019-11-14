#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

int main(){
    struct stat sb;
    int fd = stat ("stats.c", &sb);
    printf("file size: %d\n", sb.st_size);
    printf("mode (permissions): %d\n", sb.st_mode);
    time_t curtime = sb.st_atime;
    time(&curtime);
    printf("time of last access: %s", ctime(&curtime));
}