#include <stdio.h>

int main() {
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    for ( ; a < 100; a++) {
        printf("The value of a is %d\n", a);
    }

    return 0;
}

