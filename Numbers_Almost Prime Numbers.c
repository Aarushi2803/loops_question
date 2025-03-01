
#include <stdio.h>

int TotalPrimeFactors(int num) {
    int count = 0;

    
    while (num % 2 == 0) {
        num /= 2;
        count++;
    }

    
    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            num /= i;
            count++;
        }
    }

    
    if (num > 1) {
        count++;
    }

    return count;
}

int main() {
    int N, anscount = 0;
    scanf("%d", &N);

    for (int i = 2; i <= N; i++) {
        if (TotalPrimeFactors(i) == 2) {
            anscount++;
        }
    }

    printf("%d\n", anscount);
    return 0;
}
