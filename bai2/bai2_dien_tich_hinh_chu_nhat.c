#include <stdio.h>

int main()
{
    double a, b;

    printf("Nhap chieu dai a: ");
    if (scanf("%lf", &a) != 1)
    {
        printf("Du lieu nhap vao khong hop le.\n");
        return 0;
    }

    printf("Nhap chieu rong b: ");
    if (scanf("%lf", &b) != 1)
    {
        printf("Du lieu nhap vao khong hop le.\n");
        return 0;
    }

    if (a <= 0 || b <= 0)
    {
        printf("Chieu dai va chieu rong phai lon hon 0.\n");
        return 0;
    }

    double S = a * b;
    printf("Dien tich hinh chu nhat = %.2f\n", S);

    return 0;
}