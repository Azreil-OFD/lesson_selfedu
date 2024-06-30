// pch.cpp: файл исходного кода, соответствующий предварительно скомпилированному заголовочному файлу

#include "pch.h"
#include <iostream>
#include <cstdarg>
#include <cstdio>

void sub_lib::sub::print(const char* format, ...) {
    va_list args;
    va_start(args, format);

    // Печатаем форматированную строку
    vprintf(format, args);
    // Добавляем символ новой строки
    printf("\n");

    va_end(args);
}