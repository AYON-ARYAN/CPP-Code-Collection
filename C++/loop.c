#include <stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    while (a <= 100) { // Provide a condition for the while loop
        printf("%d\n", a);
        a++;
    }

    return 0;
}
