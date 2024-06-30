#include <iostream>
#include <cstdio>
#include <cstdarg>


void print(const char* format, ...) {
    va_list args;
    va_start(args, format);

    vprintf(format, args);
    printf("\n");
    va_end(args);
}

int secion_1() {
    print("secion 1:");

    int value = getchar();
    print("%d", value);
    return value;
}
void secion_2(int ch) {
    print("secion 2:");

    putchar(ch);
}
void secion_3() {
    print("secion 3:");

    int value1 = getchar();
    int value2 = getchar();
    print("%c %c", value1, value2);
}

int main()
{
    int ch = secion_1();
    secion_2(ch);
    secion_3();
    return 0;
}
