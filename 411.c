#include <stdio.h>

long double pi(int p)
{
    int i, j;
    long double pi, znak;

    pi = 0;
    znak = 1;

    for (i = 1, j = 0; j < p; j++, i += 2) {
	pi += (znak * 4) / i;
	znak *= (-1);
    }
    return pi;
}

int main()
{

    int liczba;
    printf("Podaj liczbe powtorzen: ");
    scanf("%d", &liczba);

    printf("%d: %.10Lf\n", liczba, pi(liczba));
    printf("10: %.0Lf\n", pi(10));
    printf("100: %.1Lf\n", pi(100));
    printf("1000: %.2Lf\n", pi(1000));
    printf("10_000: %.3Lf\n", pi(10000));
    printf("100_000: %.4Lf\n", pi(100000));
    printf("1_000_000: %.5Lf\n", pi(1000000));
    return 0;
}
