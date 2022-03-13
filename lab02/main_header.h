#ifndef HDR_H 
#define HDR_H /* Предотвращает случайное двойное включение */ 
#include <sys/types.h> /* Определения типов, используемые многими 
программами */ 
#include <stdio.h> /* Стандартные функции ввода-вывода */ 
#include <stdlib.h> /* Прототипы наиболее востребованных библиотечных 
функций плюс константы EXIT_SUCCESS и EXIT_FAILURE */ 
#include <unistd.h> /* Прототипы многих системных вызовов */ 
#include <errno.h> /* Объявление errno и определение констант ошибок */ 
#include <string.h> /* Наиболее используемые функции обработки строк */ 
#include <gnu/libc-version.h>   

typedef enum { FALSE, TRUE } Boolean; 
#endif