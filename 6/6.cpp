#include <iostream>
#include <cstdarg>
#include <cstdio>

// Функция print: Выводит форматированную строку с переменным числом аргументов
void print(const char* format, ...) {
    va_list args;
    va_start(args, format);

    vprintf(format, args);
    printf("\n");
    va_end(args);
}

// section_1: Инициализирует переменные различными значениями
void section_1() {
    int var, size;
    int total = 1024, buffer;
    var = 100;
    size = 100;
    buffer = 100;
}

// section_2: Присваивает значения числовым литералам (десятичные, шестнадцатеричные и восьмеричные)
void section_2() {
    int dec, hex, oct;
    dec = 100ULL;
    hex = 0x1FA;
    oct = 01234567;
}

// section_3: Инициализирует символ и выводит его символ и код ASCII
void section_3() {
    char ch;
    ch = 'd';
    char hello[2] = "1";
    print("ch = %c, code = %d", ch, ch);
}

// section_4: Инициализирует целое число и выводит его символ и код ASCII
void section_4() {
    int ch;
    ch = 1;
    char hello[2] = "1";
    print("ch = %c, code = %d", ch, ch);
}

// section_5: Инициализирует и выводит значения различных вещественных чисел
void section_5() {
    double d1, d2, d3, d4;
    float var_f;
    var_f = 10.0f;

    d1 = 10.0f;
    d2 = -7.;
    d3 = 1e2;
    d4 = 5e90; // 5 * 10^90 
    print("%d", d4);
}

// section_6: Выводит размер переменной типа float в байтах
void section_6() {
    float var_f;
    var_f = 10.0f;

    int size_f = sizeof(var_f);
    print("size float: %d", size_f);


}

int main() {
    section_1();
    section_2();
    section_3();
    section_4();
    section_5();
    section_6();
    return 0;
}
