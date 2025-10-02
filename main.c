#include "stdio.h"

int main() {
    int max(int, int);//函数声明
    int a, b, c;
    scanf("%d,%d", &a, &b);
    c = max(a, b);
    printf("max = %d\n", c);
}

int max(int x, int y) {
    int z;
    if(x > y) {
        z = x;
    }
    else {
        z = y;
    }
    return z;
}