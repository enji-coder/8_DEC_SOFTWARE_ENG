#include <stdio.h>

int fun(int x) {
    return (x > 0) ? fun(x - 1) : 5;
}

int main() {
    printf("%d",fun(3));
}



