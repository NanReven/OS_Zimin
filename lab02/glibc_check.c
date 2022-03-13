#include "main_header.h"

int main() {
    printf("GLIBC version: %s\n", gnu_get_libc_version()); // GLIBC version: 2.31
    return 0;
}

// другой способ - через команду 
// "ldd --version"