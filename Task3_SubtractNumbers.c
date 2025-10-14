#include <stdio.h>
int main() {
    int a, b, result;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        result = a - b;
    else
        result = b - a;

    printf("Result = %d\n", result);
    return 0;
}
