#include "main_header.h"
#include <fcntl.h>

int main() {
    int file_description = open("no_path", O_RDONLY);
    if (file_description == -1) {
        perror("File open error"); 
        exit(EXIT_FAILURE); 
    }
}