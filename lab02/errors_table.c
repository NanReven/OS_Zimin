#include "main_header.h"

int main() {
    int err_num = 0;
    while (err_num <= 133) {
        printf("%d:%s\n",err_num, strerror(err_num));
        err_num += 1;
    }
}