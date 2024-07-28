#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n, i;
    printf("Unesite kolicinu Fibonacijevih brojeva n: ");
    scanf("%d", &n);

    int currentNum = 0;
    int previousNum = 1;
    int preprevious = 0;

    if (n == 0) {
        printf("Nema takvih brojeva\n");
    } else if (n == 1) {
        printf("{0}\n");
    } else if (n == 2) {
        printf("{0, 1}\n");
    } else {
        printf("{0, 1");
        for (i = 2; i < n; i++) {
            currentNum = preprevious + previousNum;
            preprevious = previousNum;
            previousNum = currentNum;
            printf(", %d", currentNum);
        }
        printf("}\n");
    }
	getche();
    return 0;
}
