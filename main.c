#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int r = 1;
    printf("Number: ");
    scanf("%d", &n);

    printf("\n");

    for(int i = 1; i <= n; i++) {
        if(i != n) {
            printf("%d * ", i);
        }
        else {
            printf("%d = ", i);
        }

        r *= i;
    }

    printf("%d\n", r);

    printf("\n%d! = %d\n\n", n, r);

    system("PAUSE");
    return 0;
}