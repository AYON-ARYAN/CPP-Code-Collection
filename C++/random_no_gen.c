#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int a;
    srand(time(0));
    a = rand()% 100;

    printf("the number is %d", a);
    return 0;
}