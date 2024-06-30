#include <iostream>

// section_1: Копирует значение символа в байтовую память и выводит его значение
void section_1(char number) {
    char byte_memory = number;
    char a;
    a = byte_memory;
    printf("section_1: %d\n", a);
}

// section_2: Демонстрирует использование различных примитивных типов данных и выводит значение переполнения для unsigned char
void section_2() {
    // char <= short <= int <= long <= long long
    // float <= double <= long double
    char _char = 100;
    short _short = 127;
    int _int = -32768;
    long _long = 100000;
    float _float = 100.1f;
    double _double = 100.1f;
    long double _ldouble = 100000.1f;

    unsigned char fl_view = 0;
    fl_view -= 1;
    printf("section_2: %d\n", fl_view);
}

int main() {
    section_1(10);
    section_2();
}
