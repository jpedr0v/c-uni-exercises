//Elabore um programa que apresente todos os números divisíveis por três que sejam menores que 100.

#include <stdio.h>

int main() {
    int i;
    for (i = 3; i < 100; i += 3){
        printf("%d ", i);
    }
    return 0;
}