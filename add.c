#include<stdio.h>
int main () {
	int a, b;
    printf("Enter two integers: ");
    if(scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input!\n");
        return 1;
    }
    printf("Sum = %d\n", a + b);
    return 0;
}
