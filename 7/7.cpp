#include <iostream>
#include <cstdio>
#include <cstdarg>

// Функция print: Выводит форматированную строку с переменным числом аргументов
void print(const char* format, ...) {
    va_list args;
    va_start(args, format);

    vprintf(format, args);
    printf("\n");
    va_end(args);
}
int main()
{
    std::cout << "Hello World!\n";
}
