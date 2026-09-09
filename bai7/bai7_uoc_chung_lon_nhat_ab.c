#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int a, b;

    printf("Nhap a: ");
    if (scanf("%d", &a) != 1)
    {
        printf("Du lieu nhap vao khong hop le.\n");
        return 0;
    }

    printf("Nhap b: ");
    if (scanf("%d", &b) != 1)
    {
        printf("Du lieu nhap vao khong hop le.\n");
        return 0;
    }

    if (a <= 0 || b <= 0)
    {
        printf("a va b phai la so nguyen duong.\n");
        return 0;
    }

    printf("UCLN cua %d va %d la: %d\n", a, b, gcd(a, b));

    return 0;
}