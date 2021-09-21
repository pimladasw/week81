#include<stdio.h>
int main() {
    int x[10], i, y;
    for (i = 0; i < 10; i++) {
        printf("height : ");
        scanf_s("%d", &x[i]);
    }
    y = 0;
    for (i = 0; i < 10; i++)
        y += x[i];
    printf("The average is %d\n", y / 10);
    return 0;
}