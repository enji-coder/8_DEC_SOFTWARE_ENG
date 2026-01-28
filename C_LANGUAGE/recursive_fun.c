#include <stdio.h>

int fun(int x) {
    if(x == 1)
        return 1;
    return x * fun(x - 1);
}

int main() {
    printf("%d", fun(3));
}